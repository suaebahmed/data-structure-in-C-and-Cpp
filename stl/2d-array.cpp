#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    // way 1:
    int **a = new int*[row];
    for(int i=0; i<row; i++)
    {
        a[i] = new int[col];
    }
    // way 2:
    int **b = new int*[row];
    int *k = new int[col];
    for(int i=0; i<row; i++)
    {
        a[i] = k;
    }

    //input way 1: input and declare array --
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>k[j];
        }
        a[i] = k;
    }
    //input way 2: input and declare array --
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }

    return 0;
}
