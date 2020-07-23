#include<bits/stdc++.h>

using namespace std;
/*
5
4 5 3 7 2  --> 3 2 4 5 7

*/

vector<int> quickSort(vector<int> arr) {
    int len = arr.size();
    int pivot = arr[0];

    for(int i=1; i<len; i++){
        if(arr[i] < pivot){
            for(int j=i; j>0; j--){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    return arr;
}

int main()
{

    return 0;
}
