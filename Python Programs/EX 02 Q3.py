StockAmount=2000*40
PaidCommission=StockAmount*0.03
StockSoldAmount=2000*42.75
PaidCommissionToSell=StockSoldAmount*0.03

MoneyLeft=StockSoldAmount-StockAmount-PaidCommission-PaidCommissionToSell

print("The Stock Amount =",format(StockAmount,'.2f'))
print("Paid Commission =",format(PaidCommission,'.2f'))
print("The Stock Amount Sold =",format(StockSoldAmount,'.2f'))
print("Paid Commission To Sell =",format(PaidCommissionToSell,'.2f'))
print("Money Left =",format(MoneyLeft,'.2f'))
