ar = input("Enter the array: ").split()

def min_xor(ar):
	result = 0
	# XOR will be zero if the sum of all the elements of the array is even
	# because then the sum can be broken down into two equal halves
	for i in range(len(ar)): 
		result = result + int(ar[i])
	if (result % 2 == 0): 
		print("YES!")      
	else:
		print("NO!")

min_xor(ar)
		
