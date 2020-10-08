#include<bits/stdc++.h>

using namespace std;

// sort_heap() :- This function is used to sort the heap.
// After this operation, the container is no longer a heap.

int main()
{
    vector<int> v1 = {20, 30, 40, 25, 15};
    make_heap(v1.begin(), v1.end());

    cout << "The maximum element of heap is : ";
    cout << v1.front() << endl;

    v1.push_back(50);
    push_heap(v1.begin(), v1.end());

    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap after push is : ";
    cout << v1.front() << endl;

     // using pop_heap() to delete maximum element
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();

    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap after pop is : ";
    cout << v1.front() << endl;

    v1.push_back(100);
    push_heap(v1.begin(),v1.end());

    for(auto v: v1) cout<<v<<" ";
    return 0;
}
