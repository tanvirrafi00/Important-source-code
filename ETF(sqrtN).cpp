#include <bits/stdc++.h>
using namespace std;
void oj()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}
phi(int n)
{
	int res = n;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			res  = res / i;
			res *= (i - 1);
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}
	if (n > 1)
	{
		res /= n;
		res *= (n - 1);
	}
	return res;
}

void solve()
{
	int n;
	cin >> n;
	cout << "phi( " << n << ") = " << phi(n) << endl;

}

int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	oj();

	//test;
	solve();



}