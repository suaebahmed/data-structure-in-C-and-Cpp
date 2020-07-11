#include<iostream>
#include<math.h>

using namespace std;

void binarySearch(int arr[],int n,int target)
{
    int low = 0;
    int high = n-1;
    int max;

    while(low <= high)
    {
        max = (low+high)/2; // 0+4/2 = 2;
        max = floor(max);

        if(target > arr[max])
            low = max +1;
        else if(target < arr[max])
            high = max + 1;
        else if(target == arr[max])
        {
            cout<<"we found it"<<endl;
            return;
        }
    }
    cout<<"Not found it"<<endl;
}


int main()
{
    int arr[] = {5,10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    binarySearch(arr,n,30);
    return 0;
}
