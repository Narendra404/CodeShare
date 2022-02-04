# Program to multiply two matrices using nested loops
 
# take a 3x3 matrix
A = [[12, 7, 3],
    [4, 5, 6],
    [7, 8, 9]]
 
# display the elements of matrix
print("The value of A is :")
for i in A:
    print(i)
print()

# take a 3x4 matrix   
B = [[5, 8, 1, 2],
    [6, 7, 3, 0],
    [4, 5, 9, 1]]
     
# display the elements of matrix
print("The value of B is :")
for j in B:
    print(j)
print()

result = [[0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0]]
 
# iterating by row of A
for i in range(len(A)):
 
    # iterating by column by B
    for j in range(len(B[0])):
 
        # iterating by rows of B
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]
 
# printing the result
print("The value of A * B is :")
for r in result:
    print(r)
