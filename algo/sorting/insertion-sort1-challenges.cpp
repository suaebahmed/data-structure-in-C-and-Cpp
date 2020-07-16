#include<iostream>

using namespace std;

void printArr(vector<int> arr,int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void insertionSort1(int n, vector<int> arr) {
    bool isRemoved = false;
    for(int i=1; i<n; i++){
        int item = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > item){
            arr[j+1] = arr[j];
            printArr(arr, n);
            j--;
            isRemoved = true;
        }
        arr[j+1] = item;
        //if(arr[j+1] == item)
        //if(arr[j] > item)
        if(isRemoved)
            printArr(arr,n);
    }
}

int main()
{

    return 0;
}
