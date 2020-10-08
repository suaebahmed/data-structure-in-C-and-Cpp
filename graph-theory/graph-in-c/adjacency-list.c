#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;
typedef struct list
{
    struct Node* head;
}List;

#define mx 4
List* adjList[mx] = {0};
void addNode(int,int);
void printList();

int main()
{
    int i=0;
    for(; i<mx; i++)
    {
        adjList[i] = (List*)malloc(sizeof(List));
        adjList[i]->head = NULL;
    }
    addNode(0,1);
    addNode(0,2);
    addNode(0,3);

    addNode(1,0);
    addNode(1,2);

    addNode(2,0);
    addNode(2,1);
    addNode(2,3);

    addNode(3,0);
    addNode(3,2);
    printList();

    return 0;
}

void addNode(int s,int d)
{
    Node* dest,*temp,*src;
    if(adjList[s]->head == NULL)
    {
        src = (Node*)malloc(sizeof(Node));
        src->data = s;
        src->next = NULL;
        adjList[s]->head = src;
    }
    dest = (Node*)malloc(sizeof(Node));
    dest->data = d;
    dest->next = NULL;

    temp = adjList[s]->head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = dest;
}
void printList()
{
    int i;
    for(i=0; i<mx; i++)
    {
        Node* p = adjList[i]->head;
        printf("adjacency list for vetex %d\n",i);
        while(p)
        {
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
    }
}
