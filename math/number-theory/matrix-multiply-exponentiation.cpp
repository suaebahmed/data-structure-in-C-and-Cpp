#include<iostream>

using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define N 101
#define tab '\t\t'

int arr[N][N], I[N][N];

void mul(int A[][N],int B[][N],int dim)
{
    int res[dim+1][dim+1];

    REP(i,dim)
    {
        REP(j,dim)
        {
            res[i][j] = 0;
            REP(k,dim) res[i][j] += A[i][k]*B[k][j];
        }
    }
    REP(i,dim) REP(j,dim) A[i][j] = res[i][j];

}

void power(int A[][N],int dim,int n)
{
    REP(i,dim) REP(j,dim)
    {
        if(i == j) I[i][j] = 1;
        else       I[i][j] = 0;
    }
    //REP(i,n) mul(I,A,dim); /// I = I * A;
    while(n)
    {
        if(n%2)
            mul(I,A,dim), n--;
        else
            mul(A,A,dim),n/=2;
    }
    REP(i,dim) REP(j,dim) A[i][j] = I[i][j];// this
}

void printMatrix(int A[][N],int dim)
{
    REP(i,dim)
    {
        REP(j,dim)
        {
            cout<<A[i][j]<<" ";
            cout<<endl;
        }
    }
}

int main()
{
    int t,dim,n;
    cin>>t;
    while(t--)
    {
            cin>>dim>>n; //dimension and to-the-power(n)
            REP(i,dim) REP(j,dim) cin>>arr[i][j];

            power(arr,dim,n);
            printMatrix(arr,dim);
    }
    return 0;
}
