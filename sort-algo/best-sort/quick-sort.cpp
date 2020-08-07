#include<bits/stdc++.h>

using namespace std;

/**
      |7|2|1|6|8|5|3|-4-|  before partition

     |2|1|3|-4-|6|5|7|8|   after partition

*/

void partition(int a[],int start,int len)
{
    int pivot = a[len-1];
    int pI = start;
    for(int i=start; i<len; i++)
    {
        if(a[i] <= pivot)
        {
            swap(a[i],a[pI]);
            pI++;
        }
    }
    swap(a[pI],a[len-1]);
    /// <-- output -->
    for(int i=0; i<len; i++) cout<<a[i]<<" ";
}

void quickSort(int l,int h)
{
    if(l<h)
    {
        //int pi=partition(l,h);
        //quickSort(0,pi-1);
        //quickSort(pi,h);
    }
}

int main()
{
    int a[] = {7,2,1,6,8,5,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    partition(a,0,len);
    return 0;
}
