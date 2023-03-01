#include <stdio.h>
#define CAPACITY 5

int queue[CAPACITY];
int front = 0, rear = 0;
// prototypes of functions
void insert(int);
void delete(void);
void traversal(void);

void main()
{

    int ch, element;
    while (1)
    {
        printf("\n\n\n Welcome to queue operations \n\n\n");
        printf("1.Insertion \n");
        printf("2.Deletion \n");
        printf("3.Traversal \n");
        printf("4. Exit  \n");
        printf("Enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to enter \n");
            scanf("%d", &element);
            insert(element);
            printf("Succesfully entered %d into the queue \n", element);
            break;

        case 2:
            delete ();
            break;

        case 3:
            traversal();
            break;

        case 4:
            exit(0);

        default:
            printf("Default value entered \n");
        }
    }
}

// function for inserting in the Queue
void insert(int element)
{
    if (rear == CAPACITY)
    {
        printf("Queue is full cannot insert %d in the Queue", element);
    }
    else
    {
        queue[rear] = element;
        rear++;
    }
}

// function for deleting a item from the queue
void delete()
{
    
}

// function for traversing through the queue
void traversal()
{
}