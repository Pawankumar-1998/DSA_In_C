#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node
{
    int data;
    struct node *link;
};
struct node *root;

// prototypes for functions
void insert(void);
void display(void);
void swap(void);

void main()
{

    int ch;
    while (1)
    {
        printf("1.Insert \n");
        printf("2.display \n");
        printf("3.Swap Alternate nodes \n");

        printf("Enter Choice to perform options ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        case 3:
            swap();
            break;

        default:
            printf("Invalid choice entered \n");
        }
    }
}

void insert()
{
    
}