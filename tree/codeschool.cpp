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
    else if(root->data == data)
        return true;
    else if(data <= root->data)
        return Search(root->left,data);
    else
        return Search(root->right,data);
}

// --------- using recursion -----
int findMax(Node* head)
{
    if(head == NULL)
    {
        cout<<"the tree is empty"<<endl;
        return -1;
    }
    else if(head->right == NULL)
        return head->data;
    else
    {
        if(head->right != NULL)
            findMax(head->right);
       //  cout<<"data "<<head->data<<endl;
       //---
       //else{
       //  return head->data;
       //}
    }
}

// the best way of recursion:
int findMin(Node* head)
{
    if(head == NULL)
    {
        cout<<"the tree is empty"<<endl;
        return -1;
    }
    else if(head->left == NULL)
        return head->data;
    else return findMin(head->left);
}

// -----------------iterative solution:---------
int findMin_iterative(Node* head) // head is a local variable
{
    if(head == NULL)
    {
        cout<<"the tree is empty"<<endl;
        return -1;
    }
    while(head->left !=NULL)
        head = head->left;
    return head->data;
}
int findMax_iterative(Node* head)
{
    if(head == NULL)
    {
        cout<<"the tree is empty"<<endl;
        return -1;
    }
    while(head->right !=NULL)
        head = head->right;
    return head->data;
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

    if(Search(root,68))
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;

    cout<<"max value: "<<findMax(root)<<endl;
    cout<<"max value using iterative: "<<findMax_iterative(root)<<endl;
    cout<<"min value: "<<findMin(root)<<endl;
    cout<<"min value using iterative: "<<findMin_iterative(root)<<endl;

    return 0;
}