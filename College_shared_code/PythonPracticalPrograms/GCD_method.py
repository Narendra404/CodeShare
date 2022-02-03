# Program to find GCD of two numbers using the in-built method

# import math module to use the gcd method
import math

# declare a variable to store the first number entered by the user
a = int(input("Enter the first number: "))

# declare a variable to store the second number entered by the user
b = int(input("Enter the second number: "))

# print the GCD of the two numbers
print("GCD of",a,"and",b,"is:", math.gcd(a,b))
