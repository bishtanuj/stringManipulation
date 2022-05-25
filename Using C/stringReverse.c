// Program to reverse the string

#include<stdio.h>
#define maxSize 100

// function to reverse the string
void reverseString(char *string)
{
    char temp;
    int length;

    // calculating the length of the string
    for(int i=0; string[i] != '\0'; ++i)
    {
        length = i;
    }

    // loop to iterate the string
    for(int i=0; i<length/2; i++)
    {
        // use temp variable to temporary hold the string
        temp = string[i];
        string[i] = string[length - i -1];
        string[length - i - 1]  = temp;
    }

}

void main()
{
    char string[maxSize];

    // Scanning the string
    printf("Enter the string: ");
    fgets(string, maxSize, stdin);

    // Calling the reverseString function
    reverseString(string);

    // Printing the reversed string
    printf("Reversed String: %s",string);
}
