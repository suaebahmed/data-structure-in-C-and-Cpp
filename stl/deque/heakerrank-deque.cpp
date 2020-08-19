#include<bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    std::deque<int> Qi(k);
	int i;
	for (i = 0; i < k; ++i) {
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back();
		Qi.push_back(i);
	}


	for (; i < n; ++i) {

		cout << arr[Qi.front()] << " ";
        //--- only remove element exceed current window ---
		while ((!Qi.empty()) && Qi.front() <= i - k)
			Qi.pop_front();

		// Remove all elements smaller than the currently
		// being added element (remove useless elements)
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);
	}
	cout << arr[Qi.front()];
}

int main()
{
	int arr[] = {3,40,5,8,1,4,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	printKMax(arr, n, k);
	return 0;
}
