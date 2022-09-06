x=int(input("Enter a base number:"))
n=int(input("Enter a power number:"))

S=0
for y in range (0,n+1,1):
    S+=(x**y)

print("S=", S)
