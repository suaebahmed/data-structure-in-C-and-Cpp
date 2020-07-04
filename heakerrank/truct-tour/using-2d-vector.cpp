#include<iostream>
#include<vector>
using namespace std;

int truckTour(vector<vector<int> > petrolpump)
{
    int start=0, totalpetrol = 0;
    int n = petrolpump.size();

    for(int i=0; i<n; i++)
    {
        totalpetrol = petrolpump[i][0]-petrolpump[i][1];
        if(totalpetrol < 0)
        {
            start = i+1;
            totalpetrol = 0;
        }
    }
    return start;
}
int main()
{
    int row;
    cin>>row;
    vector<vector<int> > a(row);
    vector<int> k(2,0);
    for(int i=0; i<row; i++)
    {
        a[i] = k;
    }
    //-- input --
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }

    int result = truckTour(a);
    cout<<"result: "<<result<<endl;
    return 0;
}
