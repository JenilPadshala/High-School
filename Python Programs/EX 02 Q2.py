Charge=float(input("What is the charge of the food? :"))
Tip=Charge*0.18
SalesTax=Charge*0.07
TotalAmount=Charge+Tip+SalesTax

print("Charge =",format(Charge,'.2f'))
print("Tip =",format(Tip,'.2f'))
print("Sales Tax =",format(SalesTax,'.2f'))
print("Total Amount =",format(TotalAmount,'.2f'))
