x=(input("Enter a month:"))
y=int(input("Enter the day of the month:"))

if (x=="March" and y>=20) or (x=="April")or(x=="May") or (x=="June" and y<21):
    print("The season is Spring.")

elif (x=="June" and y>20) or (x=="July")or(x=="August") or (x=="September" and y<22):
    print("The season is Summer.")

elif (x=="September" and y>21) or (x=="October")or(x=="November") or (x=="December" and y<21):
    print("The season is Fall.")
    
else:
    print("The season is winter.")
