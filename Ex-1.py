#constant

TAX_RATE=0.1

#Input

name=input("Enter your name:")
salary=float(input("Enter your salary:"))

#calculations

tax_amount=salary*TAX_RATE
net_salary=salary-tax_amount

#output

print("Name:",name)
print("Grass Salary:",salary)
print("Tax Amount:",tax_amount)
print("Net Salary:",net_salary)
