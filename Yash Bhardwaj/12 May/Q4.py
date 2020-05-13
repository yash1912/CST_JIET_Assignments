# function which return reverse of a string 
s = input("Enter the string: ")

def isPalindrome(s): 
	return s == s[::-1] 



ans = isPalindrome(s) 

if ans: 
	print("Yes") 
else: 
	print("No") 
