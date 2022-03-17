#include <bits/stdc++.h>
using namespace std;
int parent[100000];
int rnk[100000];
void make_set(int n)
{
	for (int i = 0; i <= n; i++)
	{
		parent[i] = i;


	}
}
int find_parent(int node)
{
	if (node == parent[node])
	{
		return node;
	}
	return parent[node] = find_parent(parent[node]);
}
void union_set( int u, int v)
{
	u = find_parent(u);
	v = find_parent(v);
	if (u != v)
	{
		if (rnk[u] < rnk[v])
			parent[u] = v;
		else if (rnk[v] < rnk[u])
			parent[v] = u;
		else
		{
			parent[v] = u;
			rnk[u]++;
		}
	}
}
bool cycle(vector<pair<int, int>>v)
{
	for (auto it : v)
	{
		int x = find_parent(it.first);
		int y = find_parent(it.second);
		cout << x << " " << y << endl;
		if (x != y)
			union_set(x, y);
		else
			return true;

	}
	return false;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector< pair <int, int> > vect;
	int n;
	cin >> n;
	make_set(n);
	for (int i = 1; i <= n; i++)
	{
		int x , u, v;
		cin >> x >> u >> v;

		vect.push_back( make_pair(u, v));
		// int p1 = find_parent(u);
		// int p2 = find_parent(v);
		// if (p1 != p2)
		// {
		// 	union_set(u, v);

		// }

	}
	if (cycle(vect))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	// cout << find_parent(1) << " " << find_parent(2) << " " << find_parent(3) << endl;


}