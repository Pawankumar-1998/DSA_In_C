#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;

// predefinig the functions
void atTheEnd(int);

void main()
{
    int ch, element;
    while (1)
    {
        printf("single linked list operation : \n\n");
        printf("1.Add a node at the end of the list\n");
        printf("2.Add a node at the bignning of the list\n");
        printf("3.Add a not after or in the middle of the list\n");
        printf("4.Find the lenght of the list\n");
        printf("5.Display all the elements in the list\n");
        printf("6.Delete a node from the list\n");
        printf("7.Swap alternate nodes \n");
        printf("8.How to quit from the program\n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // function for the end
            printf("Enter the element you want to insert \n");
            scanf("%d", &element);
            atTheEnd(element);
            printf("Node with %d created sucessfully \n");
            break;

        case 2:
        
        }
    }
}

void atTheEnd(int element)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = element;
    temp->link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        p = root;
        while (p != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}