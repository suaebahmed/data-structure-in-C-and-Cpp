#include <bits/stdc++.h>

using namespace std;

// Note that by default C++ creates a max-heap
// for priority queue

void showpq(priority_queue <int> gq)
{
	priority_queue <int> g = gq;
	while (!g.empty())
	{
		cout <<" "<< g.top();
		g.pop();
	}
	cout << '\n';
}

int main ()
{
	priority_queue <int> p;
	p.push(10);
	p.push(30);
	p.push(20);
	p.push(5);
	p.push(1);

	cout << "The priority queue p is : ";
	showpq(p);

	cout << "\np.size() : " << p.size();
	cout << "\np.top() : " << p.top();

	//cout << "\np.top() : " << p.p;


	cout << "\np.pop() : ";
	p.pop();
	showpq(p);

	return 0;
}
// Syntax to create a min heap for priority queue
// priority_queue <int, vector<int>, greater<int>> g = gq;
