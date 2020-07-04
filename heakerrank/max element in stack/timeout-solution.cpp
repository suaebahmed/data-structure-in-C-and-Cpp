#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;


int main() {

    vector<int> v;
    int N,x,type;
    int i = 1;
    cin>>N;
    while (i<=N) {
        cin>>type;
        if(type == 1){
            cin>>x;
            v.push_back(x);
        }else {
            if(type == 2){
                v.pop_back();
            }
            if(type == 3){
                int j = 0;
                int max = v.front();
                for(; j<v.size(); j++){
                    if(max < v[j])
                        max = v[j];
                }
                cout<<max<<endl;
            }
        }
        i++;
    }
    return 0;
}
