x=int(input("Please enter a person's age:"))
if x<=1:
    print("The person is infant.")
elif x<13 and x>1:
    print("The person is a child.")
elif x<20 and x>=13:
    print("The person is a teenager.")
elif x==20:
    print("The person is an adult.")
