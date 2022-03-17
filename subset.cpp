#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[5] = {1, 2, 3, 5};
	//set<vector<int>>subset;
	for (int i = 1; i < (1 << 4); i++)
	{
		int tmp = i, j = 0;
		// vi v;
		int cnt = 0;


		while (tmp > 0)
		{
			if (tmp & 1)
				cout << a[j] << " ";	//v.pb(a[j]);

			j++;
			tmp >>= 1;
		}
		//subset.insert(v);

		cout << j << endl;
	}

	// for (auto it : subset)
	// {
	// 	for (auto x : it)
	// 		cout << x << " ";
	// 	cout << endl;
	// }
}