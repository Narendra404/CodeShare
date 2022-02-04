# A program to illustrate the use of command line arguments

#Importing sys module 

import sys

#Printing list (input values) we have given in command prompt

print(sys.argv)

#Accessing List elements 

print (len(sys.argv))

for i in sys.argv:

    print("Arguments", i)
