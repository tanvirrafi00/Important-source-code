#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void oj()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

}
#define mx 100001
ll a[mx];
ll tree[mx * 3];
void init(int node, int b, int e)
{
	if (b == e)
	{
		tree[node] = a[b];
		return;
	}
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	init(left, b, mid);
	init(right, mid + 1, e);
	tree[node] = tree[left] + tree[right];

}
ll query(int node, int b, int e, int l, int r)
{
	if (l > e || b > r)
		return 0;
	if (b >= l && e <= r)
		return tree[node];
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	ll p = query(left, b, mid, l, r);
	ll q = query(right, mid + 1, e, l, r);
	return p + q;

}
void update(int node, int b, int e, int idx, int value)
{

	if (idx > e || b > idx)
		return;
	if (b >= idx && e <= idx)
	{
		tree[node] = value;
		return;
	}
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	update(left, b, mid, idx, value);
	update(right, mid + 1, e, idx, value);
	tree[node] = tree[left] + tree[right];

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	oj();
	int n;

	cin >> n;
	// int a[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	init(1, 1, n);
	for (int i = 1; i <= n; i++)
		cout << tree[i] << " ";
	cout << endl;
	update(1, 1, n, 4, 9);
	cout << query(1, 1, n, 3, 6) << endl;
	for (int i = 1; i <= n; i++)
		cout << tree[i] << " ";











}