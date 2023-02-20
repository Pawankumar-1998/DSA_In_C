#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node
{
    int data;
    struct node *link;
};
struct node *root;

void main()
{

    int ch;
    while (1)
    {
        printf("1.Insert \n");
        printf("2.display \n");
        printf("3.Swap Alternate nodes \n");
    }

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number to add to the list \n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp = root;

        while (temp != NULL)
        {
            temp = temp->link;
        }
        temp->link = temp;
    }
}