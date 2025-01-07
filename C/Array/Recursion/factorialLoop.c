#include <stdio.h>
int main()
{
    int n = 20;
    unsigned long long ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;
    printf("the factorial of %d is: %llu \n", n, ans);
}