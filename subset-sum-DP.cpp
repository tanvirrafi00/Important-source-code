#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
int main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum;
	cin >> sum;
	int cnt = 0;
	bool dp[n + 1][sum + 1];
	for (int i = 0; i <= sum; i++)
		dp[0][i] = false;
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (j < a[i - 1])
			{
				dp[i][j] = dp[i - 1][j];
				//cnt--;
			}
			if (j >= a[i - 1])
			{
				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];

				if (j == sum && dp[i - 1][j - a[i - 1]] == true)
					cnt++;
			}


		}
	}
	//cout << dp[n][sum] << endl;
	cout << cnt << endl;
	// for (int i = 0; i <= n; i++)
	// {

	// 	for (int j = 0; j <= sum; j++)
	// 		cout << dp[i][j] << " ";
	// 	cout << endl;
	// }


}