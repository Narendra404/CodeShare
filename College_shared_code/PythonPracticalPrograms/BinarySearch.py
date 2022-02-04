# A program to implement Binary search

# declare an empty list
arr = []

# variable to store number of elements
n = int(input("Enter the number of elements to enter : "))

# taking input from the user
print("Enter the elements one by one.")
for i in range(n):
    a = int(input(f"Element [{i}] : "))
    arr.append(a)

# sort the list
arr.sort()

# displaying the elements in the list
print("The elements in the list are : ")
print(arr)

# variable to store the element to be searched
search = int(input("Enter the element to search : "))

# variables required to perform Binary Search
first = 0
last = n

# While loop to initiate the search
while (first < last):
    mid = int((first + last) // 2)

    if (arr[mid] == search):
        print(f"Element found at index {mid}.")
        break
        
    elif (search < arr[mid]):
        last = mid - 1

    else:
        first = mid + 1

# If element not found display appropriate message
if (first >= last):
    print("Element not found in the list.")
