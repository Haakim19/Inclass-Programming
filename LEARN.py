item_number=int(input("Enter the item number:"))
item_price=float(input("Enter the item price:"))
discount=float(input("Enter the discount(10% as 0.10):"))
Quantity=int(input("Enter the Quantity:"))


'''total=item_price*Quantity
net_total=total-(total*discount)'''

total=item_price*Quantity-(item_price*Quantity*discount)
print(total)