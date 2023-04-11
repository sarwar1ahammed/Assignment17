#include <stdio.h>
// Find the Frequency of Characters.
int main()
{
    char str[20];
    int freq[150] = {0};
    printf("Enter a String : ");
    fgets(str, 20, stdin);
    int i;
    while (str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
    }
    for (i=0; i<150; i++)
    {
        if (freq[i] != 0)
            printf("%c ==> %d\n", i, freq[i]);
    }
    printf("\n");
    return 0;
}
