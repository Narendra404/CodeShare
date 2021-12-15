n = int(input("Enter the value of n: "))
a = -1
b = 1

ar = []
for i in range(n):
    c = a + b
    ar.append(c)
    a = b
    b = c

print(ar)
