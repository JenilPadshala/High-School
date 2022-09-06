num=int(input("Enter any positive number:"))
factor=num
x=1
for x in range (1,num,1):
    num= num*(factor-x)

print("Factorial:", num)
