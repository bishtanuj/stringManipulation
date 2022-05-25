// Program to calculate the length of the string

#include<stdio.h>
#define maxSize 100

void main()
{
    char string[maxSize];
    int length;

    // scanning the string
    printf("Enter the string: ");
    fgets(string, maxSize, stdin);

    // calculating the length of string
    for(int i=0; string[i] != '\0'; ++i)
    {
        length = i;
    }

    // printing the length of the string
    printf("\nThe length of the string: %d",length);
}
