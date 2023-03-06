#!/bin/python3

# ask the user to input 2 vaues and store them in variables num1 and num2
num1, num2 = input('Enter 2 nambers: ').split()
# convert the strings into regular numbers integer
num1 = int(num1)
num2 = int(num2)
# Add the values entered and store in sum
Sum = num1 + num2
# Substract values entered and store in differences
difference = num1 - num2

# Multiply them  too
Product = num1 * num2

# Divide the values also
Quotient = num1 / num2

# get the modulus of the values divided
Mod = num1 % num2

# print the results
print("{} + {} = {}".format(num1, num2, Sum))
print("{} - {} = {}".format(num1, num2, difference))
print("{} * {} = {}".format(num1, num2, Product))
print("{} / {} = {}".format(num1, num2, Quotient))
print("{} % {} = {}".format(num1, num2, Mod))
