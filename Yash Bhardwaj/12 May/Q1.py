ar = input("Enter the array: ").split()

num = int(input('Enter the number to search in the array: '))

flag = 0
def num_search(ar,num):
	for i in range(len(ar)):
		if (int(ar[i]) == num):
			flag = 1
			break
	if (flag == 1):
		print('The number is present at {} position'.format(i+1))
	else:
		print("The number is not present!")



num_search(ar,num)