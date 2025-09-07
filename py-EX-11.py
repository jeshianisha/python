size=int(input("Enter the size of the list:"))
numbers=[]
for i in range(size):
  num=float(input("Enter a number:"))
numbers.append(num)
sum=sum(numbers)
average=sum/size
maximum=max(numbers)
minimum=min(numbers)            
print("List:",numbers)
print("Sum:",sum)
print("Average:",average)
print("Maximum;",maximum)
print("Minimum:",minimum)
