num = int(input('Enter the number: '))
a=[]
i = 0
while(num > 0):
	a.append(num % 2)
	num = num // 2
	i = i + 1

for i in a:
	print(i,end='')