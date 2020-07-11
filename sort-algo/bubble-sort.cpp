#include<iostream>

using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1-i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);

}
void printArr(int arr[],int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {40,30,20,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);

    cout<<"sorted arr: ";
    printArr(arr,n);

    return 0;
}
