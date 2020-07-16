#include<iostream>

using namespace std;
void selection_sort(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        int maxIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        //cout<<"maxIndex: "<<maxIndex<<endl;
        if(maxIndex != i)
            swap(arr[i],arr[maxIndex]);
    }
}
int main()
{
    int arr[] = {8,2,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
