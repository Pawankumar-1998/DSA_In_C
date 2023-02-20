#include <stdio.h>
#include <stdlib.h>

// creating the linked node
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;
// function prototypes
void push(int);
void pop(void);
void traverse(void);

void main()
{
    int ch, element;
    while (1)
    {
        printf("\n\n\n stack operations using linked list \n\n\n");
        printf("1.Push into stack \n");
        printf("2.Pop into stack \n");
        printf("3.Traverse through all the elements \n");
        // printf("4.Traverse through all the elements \n");
        printf("4.Quit throught stack operations \n");

        printf("Enter your choice : \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element you want push into the stack \n");
            scanf("%d", &element);
            push(element);
            printf("%d is successfully entered into the stack \n", element);
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
        default:
            printf("Invalid Option entered \n");
        }
    }
}

// this function is used to push the element into the stack
void push(int element)
{
    // creating a node here
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = element;
    temp->link = top;
    top = temp;
}

// this fucntion is used to pop(i.e delete ) the top element from the stack
void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("No elements to delete as the stack is empty \n");
    }
    else
    {
        printf("%d is popped out of the stack \n", temp->data);
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

void traverse()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("No items to display as the stack is empty \n");
    }
    else
    {
        temp = top;
        printf("Displaying the list from top to bottom as it is a stack \n");
        while (temp != NULL)
        {
            printf("%d", temp->data);
            printf("|");
            printf("|");
            temp = temp->link;
        }
    }
}