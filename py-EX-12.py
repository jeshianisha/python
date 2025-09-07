value1=input("Enter the first value:")
value2=input("Enter the second value:")
value3=input("Enter the third value:")
my_tuple=(value1,value2,value3)
length=len(my_tuple)
element1=my_tuple[0]
sliced_tuple=my_tuple[1:3]
concatenated_tuple=my_tuple+('extra',)
print("Length of the tuple:",length)
print("First element:",element1)
print("Sliced tuple:",sliced_tuple)
print("Concatenated tuple:",concatenated_tuple)
