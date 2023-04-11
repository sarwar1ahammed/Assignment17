#include <stdio.h>
// Count vowels in a given string
int main()
{
    char str[20];
    printf("Enter a String : ");
    fgets(str, 20, stdin);

    int i=0, count=0;
    while(str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'e')
            count++;
        i++;
    }
    printf("String have %d number of Vowels.", count);

    printf("\n");
    return 0;
}
