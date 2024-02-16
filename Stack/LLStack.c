#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push(void);
void display(void);

void main()
{
    int ch;
    while (1)
    {
        printf("1. For Pushing the element into the stack \n");
        printf("2. For Deleting the element into the stack \n");
        printf("3. For Displaying the element into the stack \n");
        printf("4. For Exit from the operation \n");

        printf("Enter the operation you want to perform \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            display();
            break;
        }
    }
}

void push(void)
{
    int element;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element you want to push \n");
    scanf("%d", &element);

    temp->data = element;
    temp->link = NULL;

    if (top == NULL)
    {
        top = temp;
    }

    temp->link = top;
    top = temp;
}

void display()
{
    struct node *temp;
    temp = top;

    while (temp != NULL)
    {
        printf("%d -->", temp->data);
        temp = temp->link;
    }
}