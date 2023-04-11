#include <stdio.h>
// A program to reverse a string.
int main()
{
    char str[20];
    printf("Enter a String : ");
    fgets(str, 20, stdin);
    int i, length;
    for (i=0; str[i]; i++);
    length = (i-1);

    for (i=(length-1); i>=0; i--)
        printf("%c", str[i]);


    printf("\n");
    return 0;
}
