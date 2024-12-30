#include <stdio.h>
int main()
{
    char *c1 = "pawan";
    char *p = c1;
    char *c2;
    char *c3 = c2;
    while (*p)
    {
        *c2++ = *p++;
    }
    printf("%s", c3);
    return 0;
}

/*
 1 st program

  char s[] = {'a', 'b', 'c'};
    char t[] = "abc";
    char *c = "pawan";

    printf("%d \n", sizeof(s));
    printf("%d \n", sizeof(t));
    printf("%s \n", s);
    printf("%s \n", t);
    printf("%s \n", c);

*/