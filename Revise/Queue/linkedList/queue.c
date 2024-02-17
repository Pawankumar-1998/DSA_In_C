#include <stdio.h>
#include <stdlib.h>

// structure of the node
struct node
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

// pre defining the functions
void enqueue(int);
void dequeue(void);
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
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to insert in the queue \n");
            scanf("%d", &element);
            enqueue(element);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            traversal();
            break;

        case 4:
            exit(0);
            break;
        }
    }
}

// this function is for enque option
void enqueue(int element)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = NULL;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {

        rear->next = newnode;
        rear = newnode;
    }

    printf("%d Enqued sucessfully \n", element);
}

// this function is for dequeue
void dequeue()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty cannot apply dequeue \n");
    }
    else
    {
        printf(" %d is dequeued from the queue \n", front->data);
        front = front->next;
    }
}

//  this function is used for the traversal
void traversal()
{
    struct node *temp;
    temp = front;

    while (temp != 0)
    {
        printf("%d -->", temp->data);
        temp = temp->next;
    }
}
