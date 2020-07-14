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
void heapify_bottom_UP(int arr[],int n,int index)
{
    int parent = (index-1)/2;
        if(i&& arr[index] > arr[parent]) // wrong..
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
    heapify_bottom_UP(arr,n,n-1); // (arr,6,5)
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
    if(right < n && arr[right] > arr[bigIE]) // wrong..i=>bigIE
        bigIE = right;

    if(bigIE != i)
    {
        swap(arr[i],arr[bigIE]);
        heapifyUp_bottom(arr,n,bigIE);
    }

}
int linearSearch(int arr[],int n,int target)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}
void deleteNode(int arr[],int &n,int delete_item)
{
    int index = linearSearch(arr, n, delete_item);
    //arr[0] = arr[n-1];
    //arr[n-1] = firstElement;
    //-- not swap first item but the delete_item index
    arr[index] = arr[n-1];
    n--;
    //
    heapifyUp_bottom(arr,n,0);
}
int main()
{
    int arr[MAX] = {20,12,15,8,10};
    int n = 5;

    int q,type;
    cin>>q;
    int arr[MAX];
    int n = 0;

    while(q--){
        cin>>type;
        if(type == 1){
            int v;
            cin>>v;
            insert(arr,n,v);
        }
        else if(type == 2){
            int v1;
            cin>>v1;
            deleteNode(arr,n,v1);
        }
        else if(type == 3){
            cout<<arr[0]<<endl;
        }
    }

    return 0;
}
