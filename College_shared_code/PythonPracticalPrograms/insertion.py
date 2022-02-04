# program to implement insertion sort in python

# declare a list 
a=[5,46,12,65,13,78,23,80]

# declare a list 
b=[]

# print the elements of the list
print("The elements in the array are :", a)

# loop to for insertion sort
for i in range(1,len(a)):

    key = a[i]

    j = i-1  

    while j>0 and key<=a[j]:

        a[j+1]=a[j] 

        j = j-1  

    a[j+1] = key  

for i in a:  

    b.append(i) 

# print the sorted list 
print("Elements in sorted order are:",b) 
