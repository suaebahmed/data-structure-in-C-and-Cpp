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
        this->pre = NULL;
        this->data = data;
        this->next = NULL;
    }
};
Node* append(Node* header,int data)
{
    Node* temp = new Node(data);
    if(header == NULL)
        header = temp;
    else
    {
        Node* p=header;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next = temp;
        temp->pre = p; /// doubly linkedlist pre connect;
    }
    return header;
}
void traverse(Node* header)
{
    while(header!=NULL)
    {
        cout<<" "<<header->data;
        header = header->next;
    }
}
Node* reverse(Node* header)
{
    Node* temp = NULL;
    Node* curr = header;

        while(curr !=NULL)
        {
        /*
            temp = curr->pre;
            curr->pre = curr->next;
            curr->next = temp;
            // forward
            curr = curr->pre;
        }
        //return header = temp->pre;
        */
// --------  another way but curr and temp point to NULL---
            temp = curr->next;
            curr->next = curr->pre;
            curr->pre = temp;
            curr = curr->pre;
        }
        while(header->pre != NULL)
            header = header->pre;

    return header;
}

int main()
{
  Node* header = NULL; // Node type variable

  header = append(header,10);
  header = append(header,20);
  header = append(header,30);
  header = append(header,40);

  traverse(header);
  cout<<endl;
  header = reverse(header);
  traverse(header);

  return 0;
};
