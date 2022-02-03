arr = []
ch = 'y'
while (ch == 'y'):

    n = int(input("Enter the number of elements to enter into the list : "))

    print("Enter the elements one by one.")
    for i in range(n):
        a = int(input(f"Element [{i}] : "))
        arr.append(a)

    print("The elements in the list are : ")
    print(arr)

    search = int(input("Enter the element to search : "))

    first = 0
    last = n

    while (first < last):
        mid = int((first + last) / 2)

        if (arr[mid] == search):
            print(f"Element found at index {mid}.")
            break
        
        elif (search < arr[mid]):
            last = mid - 1

        else:
            first = mid + 1

    if (first >= last):
        print("Element not found in the list.")

    ch = input("Want to continue ? (y/n) : ")
