arr = []

print("2D Matrix")

m = int(input("Enter the number of rows of the matrix : "))
n = int(input("Enter the number of columns of the matrix : "))

print("Enter the elements of the matrix one by one.")

for i in range(m):
    for j in range(n):
        k = int(input(f"Enter the element[{i}][{j}] : "))
        arr.append(k)
        
for i in range(m * n):
    print(arr[i], end=" ")

    if (((i + 1) % n) == 0):
        print()