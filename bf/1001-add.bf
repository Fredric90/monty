# Read the two digits from stdin as integers
digit1 = int(input("Enter the first digit: "))
digit2 = int(input("Enter the second digit: "))

# Ensure both inputs are single digits
if not (0 <= digit1 <= 9 and 0 <= digit2 <= 9):
 print("Invalid input. Please enter single digits only.")
 exit()

# Add the digits
sum = digit1 + digit2

# Print the one-digit result
print("The sum is:", sum)
