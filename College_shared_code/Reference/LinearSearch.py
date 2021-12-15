arr = []
ch = 'y'
while(ch == 'y'):

    n = int(input("Enter the size of list : "))

    for i in range((n)):
        a = int(input(f"Enter the {i + 1}th element : "))
        arr.append(a)

    print("Elements in the list are :")
    print(arr)

    search = int(input("Enter the intger to be searched : "))
    flag = 0
    for i in range((n)):
        if(search == arr[i]):
            print(f"Element found at index {i}.")
            flag = 1
            break

    if (flag == 0):
        print("Element not present in the list.")

    ch = input("Want to continue(y/n) : ")