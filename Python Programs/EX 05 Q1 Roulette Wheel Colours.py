x=int(input("Enter a number between 0 and 36 :"))

if x==0:
    print ("The colour is Green.")

if (x>0 and x<11) or (x>18 and x<29):
    if x%2 !=0:
        print ("The colour is Red.")

    else:
        print("The colour is Black.")

elif (x>10 and x<19) or (x>28 and x<37):
    if x%2 !=0:
        print ("The colour is Black.")

    else:
        print("The colour is Red.")

else:
    print("Error!")

    
