#include <stdio.h>
#include <stdlib.h>

// structure of the node
struct node
{
    int data;
    struct node *link;
};
struct node *root;

// pre definig the functions
void insertAtFirst(void);
void insertAtEnd(void);
void traversal(void);

int main()
{
    int ch;
    while (1)
    {
        printf("1. to enter the data at the first of the linked list \n");
        printf("2. traverse into the linked list \n");
        printf("3. Enter the data at the end of the linked list \n");
        printf("2. Exit \n");
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertAtFirst();
            printf("node inserted at first sucessfully \n");
            break;

        case 2:
            traversal();
            break;
        case 3:
            insertAtEnd();
            printf("node inserted at the last sucessfully \n");
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("invalid choice \n");
        }
    }
    
    return 0;
}

// this functon is use to insert a node at the beggning of the list
void insertAtFirst(void)
{

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to enter \n");
    scanf("%d", &temp->data);

    temp->link = NULL;
    temp->link = root;
    root = temp;
}

// this function is use to travere the linked list
void traversal(void)
{
    struct node *t;
    t = root;

    if (root == NULL)
    {
        printf("No elements to print \n");
    }
    else
    {
        while (t != NULL)
        {
            printf("%d -->", t->data);
            t = t->link;
        }
    }
}

// this functions is used to insert at the end of the linked list
void insertAtEnd(void)
{
    struct node *t, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert at the last node \n");
    scanf("%d", &temp->data);
    temp->link = NULL;

    t = root;
    while (t != NULL)
    {
        t = t->link;
    }

    t->link = temp;
}

