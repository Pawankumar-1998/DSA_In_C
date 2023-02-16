#include <stdio.h>
#include <stdlib.h> // because malloc function is available in the stdlib library

// here i am declaring the node type
struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;

void main()
{
    int choice;
    while (1)
    {
        printf("single linked list operation : \n");
        printf("1.Add a node at the end of the list\n");
        printf("2.Add a node at the bignning of the list\n");
        printf("3.Add a not after or in the middle of the list\n");
        printf("4.Find the lenght of the list\n");
        printf("5.Display all the elements in the list\n");
        printf("6.Delete a node from the list\n");
        printf("7.How to quit from the program\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            append();
            break;

        case 2:
            addatlast();
            break;

        case 3:
            addafter();
            break;
        case 4:
            length();
            break;

        case 5:
            display();
            break;

        case 6:
            delete ();
            break;

        case 7:
            exit(1);

        default:
            printf("Invalid option entered ");
        }
    }
}

void append()
{
    // creating a node here
    struct node *temp;
    // malloc function creates a node or allocates a memory for the node and has its base value
    // malloc function return type is a void pointer which can point to any data type variable
    // as we allocated a place for the node so we need to explicitly type cast it to struct node pointer
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node data : ");
    //  storing the number in the data block
    scanf("%d", &temp->data);
    //  storing in the link block
    temp->link = NULL;

    // if the root is empty then the adrdress in temp is given to the root
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;

        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}