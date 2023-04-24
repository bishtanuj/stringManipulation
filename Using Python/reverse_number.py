# Program to print the reverse of the number

# function to reverse the number
def reverse_number(nums: int) -> int:
    # convert the nums to string 
    nums_str = str(nums)
    if nums >= 0:
        # reverse the string and convert it to integer
        reverse_nums = int(nums_str[::-1])
        if reverse_nums <= 2147483647:
            return reverse_nums
        else:
            return 0
    else:
        # remove the "-" sign from the string
        nums_str_new = nums_str.replace("-", "")
        # reverse the string and convert it to integer
        reverse_nums_str_new = int(nums_str_new[::-1])
        # putting negative sign in the beginning of number
        reverse_nums = -reverse_nums_str_new
        if reverse_nums >= -2147483648:
            return reverse_nums
        else:
            return 0


# driver function
if __name__ == "__main__":
    # scan the number
    number = int(input("Enter a number: "))
    # print the reverse of the number
    print(f"Reverse Number: {reverse_number(number)}")


```
OUTPUT 1:
Enter a number: 5124
Reverse Number: 4215

OUTPUT 2:
Enter a number: -36978
Reverse Number: -87963
```
