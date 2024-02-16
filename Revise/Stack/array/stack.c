// implementing stack using the array
#include <stdio.h>

#define CAPACITY 5

int stack[CAPACITY], top = -1;

// predefing the functions
void push(int);
void pop(void);
void peek(void);
void traverse(void);

void main()
{
    int ch, item;

    while (1)
    {
        printf("1.Push an element \n");
        printf("2.Pop an element \n");
        printf("3.Traverse through the elements \n");
        printf("4.To exit from stack operations \n");

        printf("Enter your choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number you want to push \n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}

// this function is for pushing the element in the stack
void push(int item)
{
    // check for the over flow condition i.e is the stack full ?
    if (top == CAPACITY - 1)
    {
        printf("Stack is full cannot insert the element \n");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("Inserted %d in to the stack \n", item);
    }
}

// this function is for removing the top element in the stack
void pop()
{
    // check if the stack is empty
    if (top == -1)
    {
        printf("Stack is empty cannot delete \n");
    }
    else
    {
        printf("%d poped from the stack succesfully \n", stack[top]);
        top--;
    }
}

void traverse()
{
    if (top == -1)
    {
        printf("There are no element in the stack to display \n");
    }
    else
    {
        int i = top;
        while (i >= 0)
        {
            printf("%d \n", stack[i]);
            printf("| \n");
            printf("| \n");
            printf("| \n");

            i--;
        }
    }
}