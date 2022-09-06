num=int(input("Enter any positive number:"))
factor=num


while factor>1:
    num*=(factor-1)
    factor-=1

print("Factorial:", num)
