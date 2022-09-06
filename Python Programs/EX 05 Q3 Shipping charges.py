weight = float(input("What is the weight of the package? :"))

if (weight>10):
    charge=4.75

elif (weight>6):
    charge=4.00

elif (weight>2):
    charge=3.00

elif (weight<2):
    charge=1.50

print ("Shipping charge is ",charge)
