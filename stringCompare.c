// Program to compare two strings

#include<stdio.h>
#define maxSize 100

// Function to compare two strings
int compareStrings(char stringOne[], char stringTwo[])
{
    int temp = 0, flag = 0;

    while(stringOne[temp] != '\0' && stringTwo[temp] != '\0')
    {
        if(stringOne[temp] != stringTwo[temp])
        {
            flag = 1;
            break;
        }

        temp++;
    }

    if(flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void main()
{
    char stringOne[maxSize], stringTwo[maxSize];
    int compare;

    // scanning the first string
    printf("Enter first string: ");
    fgets(stringOne, maxSize, stdin);

    // scanning the second string
    printf("Enter second string: ");
    fgets(stringTwo, maxSize, stdin);

    // calling the compareString function
    compare = compareStrings(stringOne,stringTwo);

    // Printing the conclusion
    if(compare == 0)
    {
        printf("Both the strings are same");
    }
    else
    {
        printf("Both the strings are not same");
    }
}