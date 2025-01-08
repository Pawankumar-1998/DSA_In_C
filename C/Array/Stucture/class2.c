#include <stdio.h>
#include <stdlib.h>
struct emp
{
    float salary;
    int age;
    char *name;
} e1;

int main()
{
    e1.name = "pawan";
    e1.age = 25;
    e1.salary = 450000;

    struct emp *ptr = &e1;
    printf("the size of the struct is %d \n", sizeof(struct emp));
    printf("the name of the employee is %s \n", e1.name);
    // illegally editing the name
    e1.name = "master";
    printf("the name of the employee is %s \n", e1.name);
    printf("the name of the employee using * pointer is %s \n", (*ptr).name);
    (*ptr).name = "pawan";
    printf("the name of the employee using * pointer is %s \n", (*ptr).name);
}