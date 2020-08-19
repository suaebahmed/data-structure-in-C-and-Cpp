#include<bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {3,40,5,8,1,4,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;

	deque<int> d={6,2,9};

    for(int i=0; i<k; i++)
    {
        //while(!d.empty() && arr[i] >= arr[d.back])
    }
    d.pop_back();
    d.push_back(48);
    for(auto v: d) cout<<v<<" ";
    cout<<endl;
    /// ----------- -------------------
    queue<int> q;
    q.push(6);
    q.push(2);
    q.push(9);

    q.pop();
    q.push(48);
    cout<<q.back()<<endl;
    cout<<"size: "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

	return 0;
}
