// double linked list is where we can traverse both way
#include <stdio.h>
#include <stdlib.h> // this library is used because we need to allocate memory for our node in the memory

// defining the node structure
struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;

// pre-defining the functions
void insert(void);
void atFirst(void);
void traversal(void);

void main()
{
    int ch;
    while (1)
    {
        printf("Welcome to double linked list \n");
        printf("1. Insert at the last \n");
        printf("2.Insert at the begning ");
        printf("Enter Your Choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            printf("Node entered succesfully \n");
            break;

        case 2:
            atFirst();
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("Invalid \n");
        }
    }
}

// this function is used to insert the element into the double linked list
void insert()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node)); // allocating memory for the node we have created using the malloc function
    printf("Enter the data in to the node \n");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    // if root is null that means the list is empty
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while (p != NULL)
        {
            p = p->right;
        }
        p->right = temp; // creating the right connection
        temp->left = p;  // creating the left connection
    }
}

// this function is used to insert a node at the begning of the last
void atFirst()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to insert \n");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->right = root; // right connection
        root->left = temp;  // left connection
        root = temp;
    }
}