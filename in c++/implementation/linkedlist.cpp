#include<iostream>
#include<stdio.h>

using namespace std;


class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Linkedlist
{
private:
    Node *header;
    Node *tail;
    int size;
public:
    Linkedlist()
    {
        header = NULL;
        tail = NULL,
        size = 0;
    }
    void append(int data)
    {
        Node *n = new Node(data);
        if(header == NULL)
        {
            //linked list is empty
            header = n;
            tail = n;
        }else
        {
            //linked list is not empty;
            tail->next = n;
            tail = n;
        }
        // linked list size increment
        size++;
    }

    void prepand(int data)
    {
        Node *n = new Node(data);
        if(header == NULL)
        {
            header = n;
            tail = n;
        }
        else
        {
           Node *temp = header; // temporary Node type pointer;
           header = n;
           n->next = temp;
        }
        size++;
    }
    void toString()
    {
        Node* tmp = header;
        while(tmp != NULL)
        {
            cout<<tmp->data<<" ";
            tmp = tmp ->next;
        }
        cout<<endl;
    }
};



int main()
{
    Linkedlist list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.prepand(50);
    list.toString();
}
