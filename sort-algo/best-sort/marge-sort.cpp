#include<bits/stdc++.h>

using namespace std;

/**
      |2|4|1|6|8|5|3|7|  => |1|2|3|4|5|6|7|8|
        /           \
    |1|2|4|6|    |3|5|7|8|

*/

int a[8];
void marge()
{
    int left[4] = {1,2,4,6};
    int right[4] = {3,5,7,8};
    int i,j,k;
    i=j=k = 0;
    int nL = 4;
    int nR = 4;

    while(i<nL && j<nR)
    {
        if(left[i] < right[j])
        {
            a[k] = left[i];
            k++;i++;
        }
        else
        {
            a[k] = right[j];
            k++;j++;
        }
    }
    while(i<nL)
    {
        a[k] = left[i];
        k++;
        i++;
    }
    while(j<nR)
    {
        a[k] = right[j];
        k++;
        j++;
    }
    /// -- output --
    for(k=0; k<8; k++) cout<<" "<<a[k];
}
void realmarge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    int i=0,j=0,k=l;
    for(int i=0; i<n1; i++) left[i]=arr[l+i];
    for(int i=0; i<n2; i++) right[i]=arr[m+i+1];

    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
}
/// -- divide method  --
void marge_sort()
{

}

int main()
{
    marge();
    return 0;
}
