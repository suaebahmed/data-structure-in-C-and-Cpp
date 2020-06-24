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
public:
    int size;
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
    void removeFirstNode()
    {
        Node* temp = header;
        header = temp->next;
        temp->next = NULL;
        // free
        //free(temp);
        delete temp;
        size--;
    }
    void removeLastNode()
    {
        Node *p = header;

        while(p->next->next != NULL)
            p = p->next;

        //temp = p->next;
        Node *temp = tail;
        tail = p;
        tail->next = NULL;
        // free--
        //free(temp);
        delete temp;
        size--;

    }
    void insertAtACertainPosition(int data,int position)
    {
        Node *cur= header,*pre;
        int i = 1;
        //i = 1,2,//3
        while(i<position)
        {
            pre = cur;
            cur = cur->next;
            i++;
        }
        Node* temp = new Node(data);
        pre->next = temp;
        temp->next = cur;
        size ++;
    }
    void removeAtACertainPosition(int position)
    {
        Node *cur= header,*pre,*temp;
        int i = 1;
        while(i<position)
        {
            pre = cur;
            cur = cur->next;
            i++;
        }
        temp = cur;
        cur = cur->next;

       // cout<<"pre data "<<pre->data<<endl;
       // cout<<"temp data "<<temp->data<<endl;
       // cout<<"cur data "<<cur->data<<endl;

       //-- now delete the node ---
       pre->next = cur;
       temp->next = NULL;
       delete temp;
        size --;
    }
};

int main()
{

    Linkedlist list; // 3 data member,7 member method;

    list.append(10);
    list.append(20);
    list.append(30);

    list.append(60);
    list.append(70);
    //list.prepand(50);
    //list.prepand(60);
    cout<<"size of linkedlist "<<list.size<<endl;
    list.toString();
    //list.removeFirstNode();
    //list.removeLastNode();
    list.insertAtACertainPosition(40,4);
    list.insertAtACertainPosition(50,5);
    cout<<"size of linkedlist "<<list.size<<endl;

    list.toString();
    list.removeAtACertainPosition(3);
    cout<<"size of linkedlist "<<list.size<<endl;
    list.toString();
}
