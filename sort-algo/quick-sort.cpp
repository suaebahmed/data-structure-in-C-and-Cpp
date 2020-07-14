#include<bits/stdc++.h>

using namespace std;

void partition(int i,int j)
{
    while(i<j)
    {
        do{
            i++;
        }while(i);
        do{
            j++;
        }while(j);

    }
}
void quickSort(int l,int h)
{
    if(l<h)
    {
        partition(l,h);
        partition(l,h);
    }
}
int main()
{
    quickSort();
    return 0;
}
