#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5

int queue[CAPACITY];
int front = 0, rear = 0;

// prototype of the function
void insert(int);
void delete(void);
void traverse(void);

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
        printf("Enter your choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element you want to insert in the queue \n");
            scanf("%d", &element);
            insert(element);
            break;

        case 2:
            delete ();
            break;
        case 3:
            traverse();
            break;

        case 4:
            exit(0);
            break;

        default:
            break;
        }
    }
}

// function for insert
void insert(int element)
{
    if (rear == CAPACITY)
    {
        printf("Queue is full cannot insert elements \n");
    }
    else
    {
        queue[rear] = element;
        rear++;
        printf("%d inserted succesfully \n", element);
    }
}

// function for deleting a element from the queue
void delete()
{
    if (front == rear)
    {
        printf("Queue is empty cannot delete \n");
    }
    else
    {
        printf("%d is deleted from the queue \n", queue[front]);
        for (int i = 0; i < rear - 1; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;

        printf(" %d element still present in queue \n", queue[rear]);
    }
}

// function for traversing the queue
void traverse()
{
    for (int i = front; i < rear; i++)
    {
        printf("%d --> ", queue[i]);
    }
}