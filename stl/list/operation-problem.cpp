#include <bits/stdc++.h>
using namespace std;
void print(list<int> &A);
void add_to_list(list<int> &A,int x);
void remove_from_back(list<int> &A);
void remove_from_front(list<int> &A);
void sort_list(list<int> &A);
void reverse_list(list<int> &A);
int size_of_list(list<int> &A);
void add_from_front(list<int> &A,int x);


int main() {
	int t;
	char d;
	cin>>t;
	while(t--)
	{
		list<int> A;
		int q;
		cin>>q;
		while(q--)
		{
			int c;
			cin>>c;
			if(c==1)
			{
				int x;
				cin>>x;
				add_to_list(A,x);
				print(A);
			}
			else if(c==2)
			{
			     if(A.empty())
                   cout<<"-1"<<endl;
				else
                {sort_list(A);
				    print(A);
                }
			}
			else if(c==3)
			{

			     if(A.empty())
                   cout<<"-1"<<endl;
                   else
				{reverse_list(A);
				print(A);
			}
			}
			else if(c==4)
			{
				cout<<size_of_list(A)<<endl;
			}
			else if(c==5)
			{
				print(A);

			}
			else if(c==6)
			{

			     if(A.empty())
                   cout<<"-1"<<endl;
				else
                {remove_from_back(A);
				print(A);
			}}
			else if(c==7)
            {

			     if(A.empty())
                   cout<<"-1"<<endl;
                else
                {remove_from_front(A);
                print(A);
            }}
            else if(c==8)
            {
                int x;
                cin>>x;
                add_from_front(A,x);
                print(A);
            }

		}
	}
	return 0;
}

void print(list<int> &A)
{
    if(A.empty()) cout<<-1;
    else
    	for(auto v: A) cout<<v<<" ";
    cout<<endl;
}

void remove_from_back(list<int> &A)
{
   if(A.empty()) cout<<-1<<endl;
   else
   	A.pop_back();

}

void remove_from_front(list<int> &A)
{
    if(A.empty()) cout<<-1<<endl;
    else
   	A.pop_front();
}

void add_to_list(list<int> &A,int x)
{
	A.push_back(x);
}

void sort_list(list<int> &A)
{
   if(A.empty()) cout<<-1<<endl;
   else
	A.sort();
}

void reverse_list(list<int> &A)
{
   if(A.empty()) cout<<-1<<endl;
   else
	A.reverse();
}

int size_of_list(list<int> &A)
{
	return A.size();
}

void add_from_front(list<int> &A,int x)
{
	A.push_front(x);
}


