size=int(input("Enter the size of the array:"))
numbers=[]
for i in range(size):
    num=float(input("Enter a number:"))
numbers.append(num)
sum=0
for num in numbers:
   sum+=num
average=sum/size
print("Array:",numbers)
print("Sum:",sum)
print("Average:",average)
