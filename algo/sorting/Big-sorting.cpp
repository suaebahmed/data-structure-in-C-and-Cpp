#include<bits/stdc++.h>

using namespace std;


bool comp(string s1,string s2)
{
    if(s1.size() == s2.size())
        return s1<s2;
    else
        return s1.size()<s2.size();
}

void SortingBigIntegers(string arr[], int n)
{
    vector<string> sortArr(arr, arr + n);
    sort(sortArr.begin(), sortArr.end(), comp);
    for (auto &ele : sortArr)
        cout << ele << " ";
}
int main()
{
    string arr[] = {"54", "970112101220845",
                    "870112101220845", "8723"};
    int n = sizeof(arr) / sizeof(arr[0]);
    SortingBigIntegers(arr, n);

    return 0;
}
