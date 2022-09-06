PurchaseAmount=float(input("What is the purchase amount? :"))
StateTax= PurchaseAmount*0.05
CountyTax= PurchaseAmount*0.025
TotalSalesTax= StateTax + CountyTax
TotalSale= TotalSalesTax+PurchaseAmount

print("Purchase Amount =",PurchaseAmount,"\n State Tax =",format(StateTax,'.2f'),"\n County Tax =",format(CountyTax,'.2f'),"\n Total Sales Tax =",format(TotalSalesTax,'.2f'),"\n Total Sale =",format(TotalSale,'.2f'))
