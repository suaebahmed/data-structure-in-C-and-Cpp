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
    int socks[101]={0},pairs=0;
    for(int i=0; i<n; i++){
        socks[ar[i]]++;
    }
    for(int i=0; i<101; i++){
        int d = socks[i]/2;
        pairs += d;
        cout<<socks[i]<<" ";
    }
    return pairs;
}


int main()
{
    int arr[] = {10,20,20,10,10,30,50,10,20}; //4
    vector<int> ar (arr, arr+10);

    int result=sockMerchant(9,ar);
    cout<<"result: "<<result<<endl;
    return 0;
}
