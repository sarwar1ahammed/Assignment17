#include <stdio.h>
// Sort a string array in ascending order.
int main()
{
    char str[20];
    char swap;
    printf("Enter a String : ");
    fgets(str, 20, stdin);
    for (int i=0; str[i]; i++)
    {
        for (int j=i+1; str[j]; j++)
        {
            if (str[i] > str[j])
            {
                swap = str[i];
                str[i] = str[j];
                str[j] = swap;
            }
        }
    }
    printf("After swaping String will be : %s", str);

    printf("\n");
    return 0;
}
