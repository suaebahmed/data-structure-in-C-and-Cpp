#include<stdio.h>
#define S 5

int queue[S];
int front = -1;
int rear = -1;

void Enqueue()
{
    int x;
    printf("\n enter value: ");
    scanf("%d",&x);

    if(rear == S-1)
        printf("queue is full\n");
    else if(rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
};
void Dequeue()
{
    if(rear == -1)
        printf("queue is empty\n");
    else if(rear == front)
    {
        printf("%d deleted",queue[front]);
        front = rear = -1;
    }
    else{
        front ++;
        printf("%d deleted",queue[front]);
    }

}
void print()
{
    if(rear == -1)
        printf("queue is empty");
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
        printf("1-> Enqueue \n");
        printf("2-> Dequeue \n");
        printf("3-> print \n");
        printf("4-> quit \n");

        scanf("%d",&x);

        switch(x){
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            print();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalidate option");
            break;
        }
    }
}
