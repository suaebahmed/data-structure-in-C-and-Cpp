#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    vector<int> v;
    vector<int> max;
    max.push_back(0);

    int N,x,type;
    cin>>N;

    while (N--) {
        cin>>type;
        if(type == 1){
            cin>>x;
            v.push_back(x);
            if(x >= max.back()){
                max.push_back(x);
            }
        }
        else if (type == 2) {
            if(v.back() == max.back())
                max.pop_back();
            v.pop_back();
        }
        else{
            cout<<max.back()<<endl;
        }
    }
    return 0;
}
