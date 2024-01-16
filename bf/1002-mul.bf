#include <monty.h>

# Read the two digits from stdin as integers
digit1 = int(input("Enter the first digit: "))
digit2 = int(input("Enter the second digit: "))

# Ensure both inputs are single digits
if not (0 <= digit1 <= 9 and 0 <= digit2 <= 9):
  print("Invalid input. Please enter single digits only.")
  exit()

# Multiply the digits
product = digit1 * digit2

# Get the tens digit of the product
tens_digit = product // 10

# Get the ones digit of the product
ones_digit = product % 10

# Print the product
if tens_digit > 0:
  print("The product is:", tens_digit, ones_digit)
else:
  print("The product is:", ones_digit)
