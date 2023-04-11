#include <stdio.h>
/* 
    Count the total number of alphabets, digits and special
    characters in a string.
*/
int main()
{
    char str[20];
    printf("Enter a String : ");
    fgets(str, 20, stdin);

    int i, alphaCount=0, digitCount=0, speCount=0;
    for (i=0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            alphaCount++;
        else if (str[i] >= '0' && str[i] <= '9')
            digitCount++;
        else 
            speCount++;
    }
    printf("%d Alphabets presents in the String.\n", alphaCount);
    printf("%d Digit presents in the String.\n", digitCount);
    printf("%d Special Character presents in the String.", speCount);



    printf("\n");
    return 0;
}
