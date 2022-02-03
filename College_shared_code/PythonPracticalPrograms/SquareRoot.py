# A program to find the square root of a number using newton's method

# define a function to calulate the square rootof the number
def newton_method(n):
    a = float(n) # convert the number to float type
    # for loop to approximate the result a number of times
    for i in range(100):
        n = 0.5 * (n + (a / n))
    # return the calculated square root
    return n

# declare a variable to store the first number entered by the user
a = int(input("Enter a number: "))

# store the value returned by the function in a variable
sqrt = newton_method(a)

# print the square root
print("Square root of",a,"is: ", sqrt)
