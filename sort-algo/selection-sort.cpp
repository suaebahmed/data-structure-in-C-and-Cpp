#include<iostream>

using namespace std;
void selection_sort(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
            swap(arr[i],arr[minIndex]);
    }
}
int main()
{
    int arr[] = {35,9,32,27,40,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
