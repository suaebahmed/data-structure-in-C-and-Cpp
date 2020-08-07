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

/// -- divide method  --
void marge_sort()
{

}

int main()
{
    marge();
    return 0;
}
