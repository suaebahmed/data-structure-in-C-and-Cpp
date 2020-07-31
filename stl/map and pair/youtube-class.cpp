#include<bits/stdc++.h>

using namespace std;

bool cmp ( const pair<int,int> &p1, const pair<int, int> &p2  )
{
	if ( p1.first > p2.first ) return 1;
	if ( p1.first == p2.first ) return ( p1.second < p2.second );
	return 0;
}

int main()
{
    pair<int, int> p1 = { 2, 0 };
	pair<int, int> p2 = { 5, 7 };

	p2.first++;
	p1.second++;

	pair<int, int> p;

	/// Getting minimum of 2 pairs  -- priority key..
	p = min ( p1, p2 );
	cout << p.first << " " << p.second << endl; /// 1 6

	/// Getting maximum of 2 pairs
	p = max ( p1, p2 );
	cout << p.first << " " << p.second << endl; /// 2 3

	cout<<endl;
	vector<pair<int,int>> v;
	v.push_back ( { 1, 5 } );
	v.push_back ( { 2, 5 } );
	v.push_back ( { 7, 1 } );
	v.push_back ( { 3, 6 } );
	v.push_back ( { 3, 6 } );
	v.push_back ( { 7, 1 } );

	sort ( v.begin(), v.end() );
	for ( auto u : v ) cout << u.first << " " << u.second << endl;
	cout << endl;


    /// Making unique pair of integers
	int Sz = unique ( v.begin(), v.end() ) - v.begin();
	cout << Sz << endl;
	for ( int i = 0; i < Sz; i++ ) cout << v[i].first << " " << v[i].second << endl;
	cout << endl;

    /// sorting using comparator
	v = { {2, 3}, {4, 5}, {1, 5}, {1, 6}, {6, 7}, {6, 8} };
	sort ( v.begin(), v.end(), cmp );
	for ( auto u : v ) cout << u.first << " " << u.second << endl;
	cout << endl;

    v = { {2, 3}, {4, 5}, {1, 5}, {1, 6}, {6, 7}, {6, 8} };
	for ( int i = 0; i < v.size(); i++ ) v[i].first *= -1;
	sort ( v.begin(), v.end() );
	for ( auto u : v ) cout << (u.first*-1) << " " << u.second << endl;
	cout << endl;

	return 0;
}
