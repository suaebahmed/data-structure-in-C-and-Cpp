#include<iostream>

using namespace std;

int linearSearch(int arr[],int n,int target)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {10,390,49,39,348};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<linearSearch(arr,n,34)<<endl;

    return 0;
}
