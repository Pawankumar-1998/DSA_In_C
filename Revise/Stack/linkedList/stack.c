#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int);
void pop(void);
void traverse(void);

void main()
{
    int ch, item;
    while (1)
    {
        printf("\n\n\n stack operations using linked list \n\n\n");
        printf("1.Push into stack \n");
        printf("2.Pop into stack \n");
        printf("3.Traverse through all the elements \n");
        printf("4.Quit throught stack operations \n");

        printf("Enter your choice ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the item you want to insert in the Linked list \n");
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
        default:
            break;
        }
    }
}

// push function
void push(int element)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = element;
    temp->next = top;
    top = temp;
}

// pop function
void pop()
{
    // if the top is null no linkedlist is created
    if (top == NULL)
    {
        printf("Stack is empty \n");
    }
    else
    {
        printf("Element %d is removed from the stack \n", top->data);
        top = top->next;
    }
}

// traverse the list
void traverse()
{
    if (top == NULL)
    {
        printf("Stack is empty no elements to display \n");
    }
    else
    {
        struct node *i;
        i = top;

        while (i)
        {
            printf("%d \n", i->data);
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");

            i = i->next;
        }
    }
}