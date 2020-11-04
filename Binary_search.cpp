#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool binary_search(int a[], int n, int key)
{
	int l, h;
	l = 0;
	h = n - 1;
	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (key == a[mid])
			return 1;
		if (key < mid)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return 0;
}
//vector<int>v1;
int main()
{
	int n, key;
	cin >> n >> key;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);


	bool find = binary_search(a, n, key);
	if (find == 1)
		cout << "found" << endl;
	else
		cout << "Not found" << endl;
}
