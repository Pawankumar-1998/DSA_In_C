#include <stdio.h>
#include <stdlib.h>

// creating the linked node
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

void main()
{
    int ch;
    while (1)
    {
        printf("\n\n\n stack operations using linked list \n\n\n");
        printf("1.Push into stack \n");
        printf("2.Pop into stack \n");
        printf("3.Traverse through all the elements \n");
        // printf("4.Traverse through all the elements \n");
        printf("4.Quit throught stack operations \n");

        printf("Enter your choice : \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            int element;
            printf("Enter the element you want push into the stack \n");
            scanf("%d", &element);
            push(element);
            break;

        case 2:
            pop();
            break;

        case 3:
            traverse();
            break;

        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Option entered \n");
        }
    }
}

void push()
{
    // creating a node here
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element you want to push into stack \n");
}