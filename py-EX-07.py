def factorial(num):
    result = 1
    for i in range(2, num + 1):
        result *= i
    return result
n = int(input("Enter a number: "))
fact = factorial(n)
print("Factorial of", n, "is", fact)
