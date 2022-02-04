# A program to implement Linear Search

# declare an empyt list
arr = []

# variable to store size of list
n = int(input("Enter the size of list : "))

# enter elements in the list
for i in range((n)):
    a = int(input(f"Enter element no. {i + 1}: "))
    arr.append(a)

# display the elements in the list
print("Elements in the list are :")
print(arr)

# variable to store the element to be searched
search = int(input("Enter the intger to be searched : "))

# variable to determine whether element is found
flag = 0

# loop to perform search
for i in range((n)):
    if(search == arr[i]):
        print(f"Element found at index {i}.")
        flag = 1
        break

# displaying appropriate message when element not found
if (flag == 0):
    print("Element not present in the list.")
