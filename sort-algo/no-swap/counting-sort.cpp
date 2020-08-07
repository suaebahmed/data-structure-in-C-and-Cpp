#include<bits/stdc++.h>

using namespace std;

void countingSort(int arr[],int n,int k)
{
    int count[k+1];
    for(int i=0; i<=k; i++) count[i]=0;

    for(int i=0; i<n; i++)
    {
        int c = arr[i];
        count[c]++;
    }
    for(int i=1; i<=k; i++) count[i]+=count[i-1];

    int b[n];
    for(int i=n-1; i>=0; i--)
    {

        b[--count[arr[i]]] = arr[i];
    }
    for(int i=0; i<n; i++) cout<<b[i]<<" | ";

}

int main()
{
    int arr[] = {2,5,0,1,4};
    countingSort(arr,5,5);

    return 0;
}
