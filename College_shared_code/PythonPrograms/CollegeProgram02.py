# WAP to check whether a number input by user is prime or not.

num = int (input("Enter a number : "))
i = 2

while i < num :
	if num % i == 0 :
		break
	i = i + 1

if i == num :
	print("It is a Prime number.")
else :
	print("It is not a Prime number.")

