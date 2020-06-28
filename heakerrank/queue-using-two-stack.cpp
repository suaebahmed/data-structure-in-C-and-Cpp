#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    stack<int> front,rear;
    int i=1,q,type,x;
    cin>>q;
    while(i<=q){
        cin>>type;
        if(type == 1){
        cin>>x;
        rear.push(x);
        }else{
            if(type == 2){
                if(!front.empty())
                    front.pop();
                else{
                    while(!rear.empty()){
                        front.push(rear.top());
                        rear.pop();
                    }
                    front.pop();
                }
            }
            if(type == 3){
                if(!front.empty())
                    cout<<front.top()<<endl;
                else{
                    while(!rear.empty()){
                        front.push(rear.top());
                        rear.pop();
                    }
                    cout<<front.top()<<endl;
                }
            }
        }
        i++;
    }
    return 0;
}
