# A program to find the exponentiation of a number

# import math module to use the gcd method
import math

# declare a variable to store a number entered by the user
num=int(input("Enter a number: "))

# declare a variable to store the exponential value entered by the user
exp=int(input("Enter exponential value: "))

# store the value returned by pow() method in a variable
result=math.pow(num,exp)

# print the result
print("Result is:",result)
