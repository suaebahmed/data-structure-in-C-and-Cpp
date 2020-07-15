#include<iostream>

using namespace std;
void insertion(int arr[],int size)
{
    for(int i=1; i<size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}
int main()
{
    int arr[] = {35,9,32,27,40,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
