#include<iostream>
#include<queue>

using namespace std;
/*
vector::end() vector::begin();

    member functions:
        queue::back
        queue::front
        queue::empty
        queue::size
        queue::pop():void
        queue::push():void
        --
        queue::emplace
        queue::swap
*/

int main()
{
    queue<int> a1;

    a1.push(10);
    a1.push(20);
    a1.push(30);

    a1.pop();
    cout<<"size of queue: "<<a1.size()<<endl;
    cout<<"front: "<<a1.front()<<endl;
    cout<<"back: "<<a1.back()<<endl;

    return 0;
}
