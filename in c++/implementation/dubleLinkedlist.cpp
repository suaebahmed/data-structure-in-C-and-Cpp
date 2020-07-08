#include<iostream>

using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
        Node(int data)
        {
            prev = NULL;
            this->data = data;
            next = NULL;
        }
};

class dublelinkList
{
    Node *header;
    Node *tail;
    int size;
public:
    dublelinkList()
    {
        header = NULL;
        tail = NULL;
        size = 0;
    }
    void append(int data)
    {
        Node *n = new Node(data);
        //n->next = NULL;
       // cout<<n->next<<endl;

        if(header == NULL)
        {
            header = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }
    void prepand(int data)
    {
        Node *temp = new Node(data);

        if(header == NULL)
        {
            header = NULL;
            tail = NULL;
        }

        header->prev = temp;
        temp->next = header;
        header = temp;

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
Node* reverseDoublyLinked()
{
    Node* curr = head;
    Node* prev = NULL;
    Node* tmp = NULL;

    while(curr != NULL)
    {

    }
}

int main()
{
    dublelinkList list;

    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);

    list.prepand(10);
    list.prepand(5);
    list.prepand(2);
    list.prepand(1);

    list.toString();

}
