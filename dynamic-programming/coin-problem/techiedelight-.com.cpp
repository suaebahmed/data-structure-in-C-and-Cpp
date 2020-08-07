#include <bits/stdc++.h>

using namespace std;

int count(int S[], int n, int N) {

	int T[n + 1][N + 1];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			if (i == 0)
				T[0][j] = 0;
			else if (j == 0)
				T[i][0] = 1;

			else if (S[i - 1] > j)
				T[i][j] = T[i - 1][j];
			else
				T[i][j] = T[i - 1][j] + T[i][j - S[i - 1]];
		}
	}

	cout<<endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= N; j++)
		{
            cout<<T[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout<<endl;

	return T[n][N];
}

int main(void)
{
	int S[] = { 1, 2, 3 };
	int n = sizeof(S) / sizeof(S[0]);

	int N = 4;

	printf("Total number of ways to get desired change is %d", count(S, n, N));

	return 0;
}
