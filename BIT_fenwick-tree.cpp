#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
void oj()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
#define mx 100000
ll arr[mx];
ll tree[mx];
void update(int idx, int n, ll val)
{
	while (idx <= n)
	{
		tree[idx] += val;
		idx += (idx & -idx);
	}
}
ll query(int idx)
{
	ll sum = 0;
	while (idx > 0)
	{
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	oj();
	int n;
	cin >> n;
	ll a[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		update(i, n, a[i]);
	}
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;
	//update(5, n, 5);
	for (int i = 1; i <= n; i++)
		cout << tree[i] << " ";
	cout << endl;
	cout << query(7) - query(4) << endl;




}

