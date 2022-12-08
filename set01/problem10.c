#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];
    int i, n, flag = 0;

    //Input two strings from user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("\nEnter the second string: ");
    scanf("%s", str2);

    //Calculate the length of the strings
    n = strlen(str1);

    //Compare the strings character by character
    for(i=0; i<n; i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    return 0;
}