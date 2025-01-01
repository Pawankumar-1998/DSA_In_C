#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *root = NULL;

void insert(int);

void main()
{
    int ch, element;
    while (1)
    {
        printf("1. Inserting the element in the tree \n");
        printf("2. Exit from the operation \n");
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to insert \n");
            scanf("%d", &element);
            insert(element);
            printf("%d inserted sucessfully \n", element);
            break;
        case 2:
            exit(0);
            break;
        default:
            printf("Invalid option entered \n");
        }
    }
}

void insert(int element)
{
    struct node *temp, *parent;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->left = NULL;
    temp->data = element;
    temp->right = NULL;

    parent = root;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *current;
        current = root;
        while (current)
        {
            parent = current;
        }
    }
}
