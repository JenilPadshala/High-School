pizza1=float(input("Enter the price of pizza 1 :"))
pizza2=float(input("Enter the price of pizza 2 :"))
pizza3=float(input("Enter the price of pizza 3 :"))
pizza4=float(input("Enter the price of pizza 4 :"))
pizza5=float(input("Enter the price of pizza 5 :"))

Subtotal=pizza1+pizza2+pizza3+pizza4+pizza5
GST=Subtotal*0.09
TotalAmount=GST+Subtotal
print("Subtotal= ",Subtotal)
print("GST= ",GST)
print("TotalAmount= ",TotalAmount)
