#include <stdio.h>
void func1(void (*)());
void func2();

int main()
{
    //  passing a function as a argument
    func1(func2);
    return 0;
}

void func1(void (*ptr)())
{
    printf("func 1 called \n");
    (*ptr)();
}

void func2()
{
    printf("func 2 called \n");
}

/*
    //  program 1
        float pieMulti(int a, int b)
{
    return a * b / 3.14;
}

int main()
{
    float (*ptr)(int, int) = pieMulti; // this is a function pointer has the address of the function pieMulti
    printf("the address of the piemulti function is %p\n", pieMulti);
    printf("the address of the pieMulti function is %p\n", ptr); // pieMulti and  ptr has the same address

    // multiple ways to call a function
    printf("the result of the function is %f \n", pieMulti(1, 7));
    printf("the result of the function is %f \n", (*ptr)(1, 7)); // calling using the pointer
    printf("the result of the function is %f \n", ptr(1, 7));    // calling without even dereferencing because compiler knows its a address of the function as the ptr is a function pointer
}

*/