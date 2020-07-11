#include<iostream>
#define MAX 10
using namespace std;

void mySwapFun(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<y<<endl;
}
void heapify(int arr[],int n,int index)
{
    int parent = (index-1)/2;
        if(arr[index] > arr[parent])
        {
            mySwapFun(arr[index],arr[parent]);
            //build in function
            //swap();
            heapify(arr,n,parent);
        }
}

void insertNode(int arr[],int &n,int key)
{
    n++;
    arr[n-1] = key;
    // -- bottom-up forward --
    heapify(arr,n,n-1); // (arr,6,5)
}

void printArr(int arr[],int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
// delete method
void heapifyUp_bottom(int arr[],int n,int i)
{
    int left = 2*i+1;
    int right = 2*i+2;
    int bigIE = i;

    if(left < n && arr[left] > arr[i])
        bigIE = left;
    if(right < n && arr[right] > arr[i])
        bigIE = right;

    if(bigIE != i)
    {
        swap(arr[i],arr[bigIE]);
        heapifyUp_bottom(arr,n,bigIE);
    }

}
void deleteNode(int arr[],int &n)
{
    //-- swap it --
    int firstElement = arr[0];

    arr[0] = arr[n-1];
    arr[n-1] = firstElement;
    n--;
    //
    heapifyUp_bottom(arr,n,0);
}
int main()
{
    int arr[MAX] = {20,12,15,8,10};
    int n = 5;

    insertNode(arr,n,25);

    cout<<"after adding a element in heap is: ";
    printArr(arr,n);


    deleteNode(arr,n);
    cout<<"after deleting a element in heap is: ";
    printArr(arr,n);


    cout<<"But you store the delete el in last: ";
    printArr(arr,6);

    return 0;
}
