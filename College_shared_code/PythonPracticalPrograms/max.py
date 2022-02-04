# A program to find the maximum in a list

# declare an empty list
list1=[]

# enter 5 numbers in the list
for i in range(5):
    a = int(input(f"Enter element no. {i + 1}: "))
    list1.append(a)

# print result using in-built method
print("Maximum number using in-built method: ",max(list1)) 

# variable to store maximum number
maxn=0

# traversing through the list to find the maximum number
for i in list1: 

    if(i>maxn):

        maxn=i

# print result using loops
print("Maximum number using loops: ",max(list1))
