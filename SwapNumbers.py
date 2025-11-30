a = int(input("Enter first number (a): "))
b = int(input("Enter second number (b): "))

print("Before Swap: a =", a, ", b =", b)

# Swapping using temporary variable
temp = a
a = b
b = temp

print("After Swap: a =", a, ", b =", b)
