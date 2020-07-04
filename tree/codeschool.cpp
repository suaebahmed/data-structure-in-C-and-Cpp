#include<iostream>
using namespace std;

class Node
{
public:
    Node* left;
    int data;
    Node* right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node* insert(Node* head,int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
    }
    else if(data <= head->data)
    {
        //cout<<data<<endl;
        head->left = insert(head->left,data);
    }
    else{
        head->right = insert(head->right,data);
    }
    return head;
}

void inorder(Node *t)
{
    if(t->left)
        inorder(t->left);
    cout<<t->data<<" ";
    if(t->right)
        inorder(t->right);
}
bool Search(Node* root,int data)
{
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
}
int main()
{
    Node* root = NULL;
    root = insert(root,50);
    root = insert(root,20);

    root = insert(root,80);
    root = insert(root,30);
    root = insert(root,60);
    root = insert(root,15);
    root = insert(root,90);

    inorder(root);
    cout<<endl;

    if(Search(root,90)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;

    return 0;
}
