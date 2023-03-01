// Stack using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

void insert(int);

void main()
{

    int ch, element;
    printf("Enter your choice \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the element you want to insert \n");
        scanf("%d", &element);
        insert(element);
        printf("Node succesfully inserted \n");
        break;

    default:
        printf("Invalid \n");
    }
}

void insert(int element)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node)); // allocating memory to the node
    temp->data = element;
    temp->link = NULL;
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->link = top;
        top = temp;
    }
}
