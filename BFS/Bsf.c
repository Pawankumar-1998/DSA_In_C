#include <stdio.h>
#include <stdlib.h>

#define SIZE 40

struct queue
{
    int data[SIZE];
    int front;
    int rear;
};

struct node
{
    int vertex;
    struct node *link;
};

struct graph
{
    int numVertices;
    struct node **adjlist;
    int *visted;
};
