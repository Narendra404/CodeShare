# A program to find GCD of two numbers using a recursive function

# define a recursive function to find gcd
def gcd(a,b):
    if(b == 0): 
        return a 
    else:
        return gcd(b,a%b) 

# declare a variable to store the first number entered by the user
a = int(input("Enter the first number: "))

# declare a variable to store the second number entered by the user
b = int(input("Enter the second number: "))

# call the function defined above and store the value returned in a variable
GCD = gcd(a,b)

# print the GCD of the two numbers
print("GCD of",a,"and",b,"is:", GCD)
