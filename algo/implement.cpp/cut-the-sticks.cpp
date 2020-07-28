#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
Explanation 0

sticks-length        length-of-cut   sticks-cut
5 4 4 2 2 8             2               6
3 2 2 _ _ 6             2               4
1 _ _ _ _ 4             1               2
_ _ _ _ _ 3             3               1
_ _ _ _ _ _           DONE            DONE

*/

vector<int> cutTheSticks(vector<int> arr) {
    vector<int> result,cpy=arr;
    int skip=0,count=0;
    while(skip!=cpy.size()){
        sort(cpy.begin(),cpy.end());
        int min = cpy[skip],len = arr.size();
        skip = 0;
        count = 0;
        for(int i=0; i<len; i++){
            if((arr[i]-min)>=0){
                count++;
                arr[i] = arr[i]-min;
            }
            if(arr[i]==0){
                skip++;
            }
        }
        result.push_back(count);
        cpy = arr;
    }
    return result;
}

int main()
{
    int arr[] = {5,4,4,2,2,8};
    vector<int> a(arr,arr+6),result;
    result=cutTheSticks(a);
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}
