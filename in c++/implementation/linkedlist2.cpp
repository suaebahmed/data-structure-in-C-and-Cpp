#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
    ~Node()
    {
        cout<<" I am destructors is Node class but not called as allocate heap memory"<<endl;
    }
};


class Linkedlist
{

    Node* header,*tail;
public:
    static int size;
    Linkedlist()
    {
        header = NULL;
        tail = NULL;
        size = 0;
    }
    void append(int data)
    {
        Node *temp = new Node(data);
        if(header== NULL)
            header = tail = temp;
        else
        {
            // tail->next = temp;
            // tail = temp;

            temp->next = tail;
            tail = temp;
        }
        size ++;
    }
    void prepand(int data)
    {

    }
    void toString()
    {
        if(header==NULL)
            printf("linked list is empty");
        else
        {
            Node * temp = tail;
   //       Node * temp = header;
            while(temp != NULL)
            {
                printf("%d ",temp->data);
                temp = temp->next;
            }
        }
    }
    ~Linkedlist()
    {
        cout<<" I am destructor is linkedlist class"<<endl;
    }

};
int Linkedlist::size = 0;

int main()
{
    Linkedlist list;
    list.append(10);
    list.append(20);
    list.append(30);

    cout<<"size : "<<Linkedlist::size<<endl;
    list.toString();
}
