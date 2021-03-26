#include <bits/stdc++.h>
using namespace std;
void oj()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}
int phi[1000001];
void init(int max)
{
	for (int i = 1; i <= max; i++)
	{
		phi[i] = i;
	}
	for (int i = 2; i <= max; i++)
	{
		if (phi[i] == i)
			for (int j = i; j <= max; j += i)
			{
				phi[j] /= i;
				phi[j] *= i - 1;
			}
	}
}

void solve()
{
	int n;
	cin >> n;
	cout << "phi( " << n << ") = " << phi[n] << endl;

}

int main()
{
	init(1000000);

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	oj();

	//test;
	solve();



}