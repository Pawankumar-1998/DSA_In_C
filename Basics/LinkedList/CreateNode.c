#include <stdio.h>
#include <stdlib.h> // because malloc function is available in the stdlib library

// here i am declaring the node type
struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;
// in len we are going to store the length of the linked list
int len;
// prototypes of the functions as programs reads top to bottom
void append(void);
void addatfirst(void);
void addafter(void);
int length(void);
void display(void);
void delete(void);

void main()
{
    int choice;
    while (1)
    {
        printf("single linked list operation : \n\n");
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
            // this function will append / add a node at the end of the list
            append();
            printf("node is successful \n");
            break;

        case 2:
            // this function is used to add a node at the beginning of the list
            addatfirst();
            break;

        case 3:
            // this function is used to add a node at the beginning of the list
            addafter();
            break;
        case 4:
            // this functon is used to find the length of the list
            len = length();
            printf("The number of nodes is the list are %d \n\n", len);
            break;

        case 5:
            // this function is used to display all the elements in the list
            display();
            break;

        case 6:
            // this function is used to delete a node from the list
            delete ();
            break;

        case 7:
            // this function is used to exit from the loop
            exit(1);

        default:
            printf("Invalid option entered ");
        }
    }
}
// adding a node at the last
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

    // if the root is empty then the adrdress in temp is given to the root and this will be first as well as last node
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

// this function is used to find the length of the linked list
int length()
{
    int count = 0;
    struct node *temp;
    temp = root;
    // if root node is null that means there are no node in the linked list, so 0 will be returned ;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

// this function is used to display the elements in the linked list
void display()
{
    struct node *temp;
    temp = root;
    if (temp == NULL)
    {
        printf("linked list is empty \n\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
}

// this function is used to add a node at the beginning of the list (near the root node )
void addatfirst(void)
{
}

// this function is used to add a note in between of the list
void addafter(void)
{
}

// this function is used to delete the node from the list
void delete(void)
{
}