# Write a program to split the name of the user in first, middle and last name

name = input("Enter your name: ")

first_name, middle_name, last_name = name.split(" ")

print("First Name:", first_name)
print("Middle Name:", middle_name)
print("Last Name:", last_name)


# OUTPUT
# Enter your name: Neil Nitin Mukesh
# First Name: Neil
# Middle Name: Nitin
# Last Name: Mukesh

# OUTPUT
# Enter your name: Anuj  Bisht
# First Name: Anuj
# Middle Name: 
# Last Name: Bisht
