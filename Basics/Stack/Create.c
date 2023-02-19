/*
What is stack ?
In C language, a stack is a data structure that stores a collection of elements, where the last element added is the first one to be removed (known as Last-In-First-Out or LIFO).
*/
#include <stdio.h>
// #include <stdlib.h> --> this library is not used here because we created stack by static allocation of the memory (i.e static Array)
#define CAPACITY 5 // pre processing macros
/*
About pre processing macros
------------------------------

n C language, "#define" is a preprocessor directive that is used to define a constant value. When the preprocessor encounters a "#define" directive in the code, it replaces all occurrences of the defined name with the defined value.

In this case, "#define CAPACITY 5" defines a constant named "CAPACITY" with a value of 5. This means that every time the preprocessor encounters the name "CAPACITY" in the code, it will replace it with the value 5 before the code is compiled.
*/

// using stack data structure algorithm using static array
int stack[CAPACITY], top = -1;
// prototypes of the functions used in this program
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);
void main()
{
    int ch, item;
    while (1)
    {
        printf("1.Push an element \n");
        printf("2.Pop an element \n");
        printf("3.Peek an element \n");
        printf("4.Traverse through the elements \n");
        printf("5.To exit from stack operations \n");

        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // to push elements in the stack
            printf("Enter the element to push \n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            // to pop the top element form the stack
            item = pop();
            if (item == 0)
            {
                printf("There are no elements in the stack to pop \n");
            }
            else
            {
                printf("Popped item is : %d \n", item);
            }
            break;
        case 3:
            // to see the top element of the stack
            peek();
            break;
        case 4:
            // to display all the elements in the stack
            traverse();
            break;
        case 5:
            // to exit from the stack operation
            exit(0);
            break;
        default:
            printf("Invalid input \n");
        }
    }
}

// this function is used to push the element into the stack
void push(int element)
{
    if (isFull())
    {
        printf("Cannot enter the elements as the stack is full \n");
    }
    else
    {
        top++;
        stack[top] = element;
        printf("%d Pushed into stack Sucessfully \n\n", element);
    }
}

// this function is used to check weather the stack is full or not
int isFull()
{
    if (top == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// this function is used to pop (i.e delete) a element form the stack
int pop()
{
    if (isEmpty())
    {
        // printf("There are no elements in the stack \n");
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
// this function is used to check weather the stack is empty or not
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// this function is used to just see the element which is on the top of the stack
void peek()
{

    if (isEmpty())
    {
        printf("There are no elements to display as the stack is empty \n");
    }
    else
    {
        printf("element at the top of the stack is %d \n", stack[top]);
    }
}

// this function is used to display all the elements in the stack
void traverse()
{
    int i;
    if (isEmpty())
    {
        printf("There are no elements in the stack to display \n");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf("element at %d index of the stack is %d \n", i, stack[i]);
        }
    }
}