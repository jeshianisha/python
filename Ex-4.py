#input

num=int(input("Enter apositive integer:"))

#calulate fatorial using a loop

factorial=1
for i in range(1,num+1):
    factorial*=i

#output

    print(f"The factorial of{num} is:{factorial}")
