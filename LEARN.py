a=int(input("enter number a:"))
b=int(input("enter number b:"))
count=0
even=[]
odd=[]
for i in range(a, b):
    
    if i%2==0:
        even.append(i)
        
    else:
        odd.append(i)
print("Even numbers:",even)
print("Odd numbers:",odd)

    