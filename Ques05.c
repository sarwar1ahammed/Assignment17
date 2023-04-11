#include <stdio.h>
// Convert a given string into lowercase
int main()
{
    char str[20];
    printf("Enter a String in Uppercase : ");
    fgets (str, 20, stdin);
    int i=0;
    while(str[i] != '\0')
    { 
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        printf("%c", str[i]);
        i++;
    }


    printf("\n");
    return 0;
}
