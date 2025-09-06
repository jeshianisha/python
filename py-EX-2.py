print("operators in python")

num1=float(input("Enter the first number :"))

num2=float(input ("Enter the second number:"))
print("**** Arithmetic Operator****")
addition=num1+num2
subtraction=num1-num2
multiplication=num1*num2
division=num1/num2
modulus=num1%num2
exponent=num1**num2
print("Addition:",addition)
print("Subtraction:",subtraction)
print("Multiplication:",multiplication)
print("Division:",division)
print("Modulus:",modulus)
print("Exponentiation:",exponent)
print("*****Comparison Operation*****")
is_equal=num1==num2
is_not_equal=num1!=num2
is_greater=num1>num2
is_less=num1<num2
is_greater_equal=num1>=num2
is_less_equal=num1<=num2
print("Equal to:",is_equal)
print("Not equal to:",is_not_equal)
print("Greater than:",is_greater)
print("Less than:",is_less)
print("Greater than or equal to:",is_greater_equal)
print("Less than or equal to:",is_less_equal)
print("*****Logical Operations*****")
and_operation=(num1>0)and(num2>0)
or_operation=(num1>0)or(num2>0)
not_operation=not(num1>0)
print("Logical AND(both>0):",and_operation)
print("Logical OR(either>0):",or_operation)
print("Logical NOT(not num1>0):",not_operation)
print("******Assignment Operation******")
num1+=5
num2*=2
print("After num1+=5:",num1)
print("After num2*=2:",num2)
