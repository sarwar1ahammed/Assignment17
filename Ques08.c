#include <stdio.h>
// Copy one string to another string.
int main()
{
    char str1[20], str2[20], temp[50];
    printf("Enter first string : ");
    fgets(str1, 20, stdin);
    printf("Enter second string : ");
    fgets(str2, 20, stdin);
    int i, j;
    for (i=0; str1[i]; i++)
        temp[i] = str1[i];
    for (j=0; str2[j]; j++)
        temp[i+j] = str2[j];
 
    printf("%s", temp);


    printf("\n");
    return 0;
}
