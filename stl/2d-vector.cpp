#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    vector<vector<int> > a(row); // int** a = new int*[row];
    vector<int> k(col,100); // = new int[col];

    for(int i=0; i<row; i++)
    {
        a[i] = k;
    }

    for(int i=0; i<row; i++)
    {
        // a[i] = new int[col]
        for(int j=0; j<col; j++)
        {
            //cin>>k[j];
            cin>>a[i][j];
        }
        //a[i] = k;
    }

    //-------output-----------
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<" | "<<a[i][j];
        }
        cout<<" | "<<endl;
    }
};
