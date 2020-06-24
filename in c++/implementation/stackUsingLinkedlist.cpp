#include<iostream>

using namespace std;
template <class t>

class Node
{
    t data;
    Node* next;
};
class Stack
{
    Node* front;
    Node* rear;
public:
    t size;
    Stack()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void push()
    {

    }
    void pop()
    {

    }

};

int main()
{

    return 0;
}
