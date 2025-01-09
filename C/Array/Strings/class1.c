#include <stdio.h>
#include <string.h>

int main()
{
    char a[6];
    char b[6];
    char c[20];
    fgets(a, 6, stdin);
    gets(b);

    strcpy(c, a);
    printf("the string is c after strcpy is : %s \n", c);
    strcat(c, b);
    printf("the string is c after strcat is : %s \n", c);
    printf("the size of c using strlen is : %d \n", strlen(c));
    printf("the size of c using size of is : %d \n", sizeof(c));
    printf("the greater among two strings is : %d \n", strcmp(b, a));
}