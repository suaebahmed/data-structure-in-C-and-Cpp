#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;


void insert()
{
    int x;
    printf("\n enter value: ");
    scanf("%d",&x);

    if(rear+1 == front || (rear == SIZE-1 && front == 0))
    {
        printf("the circular queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }else if(rear == SIZE-1)
    {
        rear = 0;
        queue[rear] = x;
    }else
    {
        rear ++;
        queue[rear] = x;
    }
}

void delete()
{

    if(front == -1 && rear == -1){
        printf("the circular queue is empty\n");
    }else if(front == rear){
        printf("the circular queue is empty\n");
    }
    else if(front == SIZE - 1){
        printf("%d is deleted\n",queue[front]);
        front = 0;
    }
    else{
        printf("%d is deleted\n",queue[front]);
        front ++;
    }

}

void traverse()
{

   if(front == -1 && rear == -1)
    {
        printf("the circular queue is empty\n");
    }else if(front > rear)
    {
        for(int i=0; i<=rear; i++)
            printf("%d ",queue[i]);
        for(int i=front; i< SIZE; i++)
            printf("%d ",queue[i]);
    }
    else{
        for(int i=front; i<=rear; i++)
            printf("%d ",queue[i]);
    }
}

int main()
{
    while(1)
    {
        int x;
        printf("\n choose option: \n");
        printf("1-> insert \n");
        printf("2-> display \n");
        printf("3-> delete \n");
        printf("4-> quit \n");

        scanf("%d",&x);

        switch(x){
        case 1:
            insert();
            break;
        case 2:
            traverse();
            break;
        case 3:
            delete();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter validate option");
            break;
        }
    }
}
