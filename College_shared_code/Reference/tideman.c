#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
}
pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i]) == 0)
        {
            ranks[rank] = i;
            return true;
        }
    }

    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = i + 1; j < candidate_count; j++)
        {
            preferences[ranks[i]][ranks[j]]++;
        }
    }

    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    int k = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = i + 1; j < candidate_count; j++)
        {
            if (preferences[i][j] > preferences[j][i])
            {
                pairs[k].winner = i;
                pairs[k].loser = j;
            }
            else if (preferences[i][j] < preferences[j][i])
            {
                pairs[k].winner = j;
                pairs[k].loser = i;
            }
            else
            {
                k--;
            }

            k++;
        }
    }
    
    pair_count = k;

    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    pair t;
    int max;

    for (int i = 0; i < pair_count; i++) 
    {
        max = i;

        for (int j = i + 1; j < pair_count; j++)
        {
            if (preferences[pairs[j].winner][pairs[j].loser] > preferences[pairs[max].winner][pairs[max].loser])
            {
                max = j;
            }
        }

        t = pairs[i];
        pairs[i] = pairs[max];
        pairs[max] = t;
    }

    return;
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    for (int i = 0; i < pair_count; i++)
    {
        locked[pairs[i].winner][pairs[i].loser] = true;
        pair count[10];
        int j = pairs[i].winner, k = pairs[i].loser, flag = 0, m = 1, n;
        count[0].winner = j;
        count[0].loser = k;

        while (true)
        {
            n = 0;

            for (int x = flag; x < candidate_count; x++)
            {
                if (locked[k][x] == true)
                {
                    j = k;
                    k = x;

                    n = 1;

                    for (int z = 0; z < m; z++)
                    {
                        if (count[z].winner == j && count[z].loser == k)
                        {
                            m = -1;
                        }
                    }
                    count[m++].winner = j;
                    count[m++].loser = k;

                    break;
                }
            }

            if (m == -1)
            {
                locked[pairs[i].winner][pairs[i].loser] = false;
                break;
            }

            if (n == 0)
            {
                if (j == pairs[i].winner && k == pairs[i].loser)
                {
                    break;
                }

                if (flag == candidate_count)
                {
                    flag = 0;
                    j = count[m - 1].winner;
                    k = count[m - 1].loser;
                    count[m].winner = 0;
                    count[m].loser = 0;
                    m--;

                    if (j == pairs[i].winner && k == pairs[i].loser)
                    {
                        break;
                    }
                }

                flag = count[m].loser + 1;
                k = count[m].winner;
            }
        }
    }

    return;
}

// Print the winner of the election
void print_winner(void)
{
    for (int i = 0; i < candidate_count; i++)
    {
        int flag = 0;

        for (int j = 0; j < candidate_count; j++)
        {
            if (locked[j][i] == true)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%s\n", candidates[i]);
        }
    }

    return;
}

