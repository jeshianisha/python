#using break statement to exit the loop

print("Example using 'break'statement.")
for i in range(1,11):
    if i==5:
        print("Loop terminated early due to 'break'statement.")
        break
    print(i)

#Using continue statements to skip an interation

print("\n Example uing 'continue' statement:")
for i in range(1,11):
    if i==3 or i==7:
        print(f"Skipping iteration{i}due to 'continue'statement.")
        continue
    print(i)
