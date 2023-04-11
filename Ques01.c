#include <stdio.h>
// Calculate the length of the string. (without using built-in method)
int main()
{
    char str[20];
    printf("Enter a String : ");
    fgets (str, 20, stdin);
    int i=0;
    while (str[i] != '\0')
        i++;

    printf("Length of the string is : %d", (i-1));

    printf("\n");
    return 0;
}
