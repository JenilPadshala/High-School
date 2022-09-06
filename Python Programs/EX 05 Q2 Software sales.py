Qty=int(input("What is the quantity of the package? :"))

if (Qty>=100):
    discount_Amt= Qty * 99 * 0.4
    Total= (Qty*99)-discount_Amt

elif (Qty>=50):
    discount_Amt= Qty * 99 * 0.3
    Total= (Qty*99)-discount_Amt

elif (Qty>=20):
    discount_Amt= Qty * 99 * 0.2
    Total= (Qty*99)-discount_Amt
elif (Qty>=10):
    discount_Amt= Qty * 99 * 0.1
    Total= (Qty*99)-discount_Amt

print ("Discount Amount:", discount_Amt)
print ("Total Amount: ",Total)
