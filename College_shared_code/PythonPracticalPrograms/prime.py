# program to find first n prime numbers

# function to find if a number is prime or not
def isprime(n):
    for i in range(2, n):
        if (n % i == 0):
            return False
    return True

# variable to store the number of prime numbers
num=int(input("Enter range: "))

print("Prime numbers:",end=' ')

# some loop variables initialized
i = 0
n = 2

# loop to print the prime numbers
while (i < num):
    if (isprime(n) == True) :
        i += 1
        print(n,end=' ')
    n += 1
