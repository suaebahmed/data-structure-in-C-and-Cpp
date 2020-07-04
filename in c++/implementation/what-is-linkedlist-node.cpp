#include<iostream>

using namespace std;

class Node
{
public:
    Node* pre;
    int data;
    Node* next;
    Node(int data)
    {
        cout<<"from constructor "<<this<<endl;
        this->pre = NULL;
        this->data = data;
        this->next = NULL;
    }
    Node()
    {
        cout<<"default constructor "<<this<<endl;
    }
};
int main()
{
  Node* temp = new Node(10);
  Node* temp1 = new Node(20);
  Node* temp2 = new Node(20);

  cout<<endl;
  cout<<"temp base address "<<temp<<endl;
  cout<<"temp1 base address "<<temp1<<endl;
  cout<<"temp2 base address "<<temp2<<endl;
  // data address
  cout<<endl;
  cout<<"pre address "<<&temp->pre<<endl;
  cout<<"data address "<<&temp->data<<endl;
  cout<<"next address "<<&temp->next<<endl;

  cout<<endl;
  cout<<"pre1 address "<<&temp1->pre<<endl;
  cout<<"data1 address "<<&temp1->data<<endl;
  cout<<"next1 address "<<&temp1->next<<endl;

  cout<<endl;
  cout<<"pre2 address "<<&temp2->pre<<endl;
  cout<<"data2 address "<<&temp2->data<<endl;
  cout<<"next2 address "<<&temp2->next<<endl;

  Node list;

  return 0;
};
