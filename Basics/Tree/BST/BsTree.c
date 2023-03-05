#include <stdio.h>
#include <stdlib.h>

// Creating the node structure here
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

// predefining the functions
void insert(int);

void main()
{
    int ch, element;
    while (1)
    {
        printf("1.Insert \n");
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to insert \n");
            scanf("%d", &element);
            insert(element);
            printf("Sucessfully inserted %d in the tree \n");
            break;

        case 2:
            exit(0);
            break;

        default:
            printf("invalid choice entered \n");
        }
    }
}

// this function is used to insert the element into the tree
void insert(int element)
{
    struct node *temp, *parent;
    // allocating memory to the node using malloc function
    temp = (struct node *)malloc(sizeof(struct node));

    // sending the data into the node
    temp->data = element;
    temp->right = NULL;
    temp->left = NULL;

    parent = root;
    // if root is null means tree is empty
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
            if (temp->data > current->data)
            {
                current = current->right;
            }
            else
            {
                current = current->left;
            }
        }
        // after the while block ends you will find the parent node
        if (temp->data > parent->data)
        {
            parent->right = temp;
        }
        else
        {
            parent->left = temp;
        }
    }
}