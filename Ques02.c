#include <stdio.h>
// Count the occurrence of a given character in a given string.
int main()
{
    char str[20];
    printf("Enter a String : ");
    fgets(str, 20, stdin);
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    int i=0, count=0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            count++;
        i++;
    }
    printf("\'%c\' occurrs %d times.", c, count);

    printf("\n");
    return 0;
}
