a='0'
cost=0

while a!=(''):
    a=int(a)
    if a<=2:
        cost=0

    elif a>3 and a<12:
        cost+=14

    elif a>=65:
        cost+=18

    else:
        cost+=23

    a=input('Enter the age of the guest:')

print("The total cost: $",format(cost,'.2f'))
