#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *front;
    struct node *back;
    int data;
};
struct node *head;
void beginning(int);
void main()
{
    int ch, data;
    while (1)
    {
        printf("Enter your choice \n");
        printf("Press 1 to insert a element at the beggning \n");
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data you want to insert \n");
            scanf("%d", &data);
            beginning(data);
            printf("%d inserted successfully \n", data);
            break;

        case 2:
            exit(0);
        }
    }
}

void beginning(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        temp->back = NULL;
        temp->front = NULL;
        temp->data = item;
        head = temp;
    }
    else
    {
        temp->back = NULL;
        temp->front = head;
        temp->data = item;
        head = temp;
    }
}