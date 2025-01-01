#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *root;

void insert(int);

void main()
{
    int ch, element;
    while (1)
    {
        printf("1. Insert element in the tree \n");
        printf("2. Exit from the program \n");
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to enter \n");
            scanf("%d", &element);
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
}