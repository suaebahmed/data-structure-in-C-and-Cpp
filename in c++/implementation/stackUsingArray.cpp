#include<iostream>
#include<stdio.h>
#define S 3

using namespace std;
/*
    --they return value:--
    top(): int
    size(): int
    empty(): boolean
*/

int queue[S];

class myStack
{
    int front;
    int rear;
public:
    int size = 0;
    myStack()
    {
        front = -1;
        rear = -1;
        size = 0;
    }
    void push(int data);
    int top();

    void pop()
    {
        if(front == -1 && rear == -1)
            cout<<"the circular queue is empty"<<endl;
        else if(front == rear)
            cout<<"the circular queue is empty"<<endl;
        else if(front == S-1)
        {
            printf("%d ",queue[front]);
            front --;
            size --;
        }
        else
        {
           // cout<<" is poped"<<queue[front]<<endl;

            printf("%d ",queue[front]);
            front --;
            size --;
        }

    }
    int empty()
    {
        if(size == 0)
            return 0;
        else
            return 1;
    }
};

void myStack::push(int data)
{
    if(rear == front - 1 || (rear == S - 1 && front == 0))
        cout<<"the circular queue is full"<<endl;
    else if(rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = data;
        size ++;
    }
    else if(rear == S-1)
    {
        rear = 0;
        queue[rear] = data;
        size ++;

    }
    else
    {
        rear ++;
        queue[rear] = data;
        size ++;
    }
}

int myStack::top()
{
    if(rear == -1 && front == -1)
    {
        cout<<"the circular queue is full"<<endl;
        return 0;
    }
    else{
        return queue[front];
    }
}


int main()
{
    myStack s1;
}
