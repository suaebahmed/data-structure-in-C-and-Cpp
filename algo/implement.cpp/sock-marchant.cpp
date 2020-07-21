#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void A()
{
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    /*
    //Set<Integer> colors = new HashSet<>();
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        if (!colors.contains(c[i])) {
            colors.add(c[i]);
        } else {
            pairs++;
            colors.remove(c[i]);
        }
    }

    System.out.println(pairs); */
}

int sockMerchant(int n, vector<int> ar)
{
     int new_arr[101]={0};
    int i,sum=0;
    for(i=0; i<n; i++)
         new_arr[ar[i]]++;
         //new_arr[ar[i]] = 1;
    for(i=0; i<101; i++)
        cout<<new_arr[i]<<" ";
         //sum+=(new_arr[i]/2);

    return sum;
}
int main()
{
    int arr[] = {1,1,3,1,2,1,3,3,3,3}; //4
    vector<int> ar (arr, arr+10);

    int result=sockMerchant(10,ar);
    cout<<"result: "<<result<<endl;
    return 0;
}
