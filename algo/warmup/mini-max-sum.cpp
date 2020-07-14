#include <bits/stdc++.h>

using namespace std;


void miniMaxSum(vector<int> arr) {
    long min = 0;
    long max = 0;

    sort(arr.begin(),arr.end()); // sorting..

    for(int i=0; i<arr.size()-1; i++){
        min += arr[i];
    }
    cout<<min<<" ";
    for(int i=1; i<arr.size(); i++){
        max += arr[i];
    }
    cout<<max<<endl;
}

int main()
{
    vector<int> arr;
    int a[] = {7,69 ,2 ,221 ,8974};
    for(int i=0; i<5; i++){
        arr.push_back(a[i]);
    }
    miniMaxSum(arr);
    return 0;
}
