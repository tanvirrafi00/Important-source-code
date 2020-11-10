#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prime_factor(ll n)
{
	ll temp = n;
	while (n % 2 == 0)
	{
		cout << 2 << " ";
		n /= 2;
	}
	for (int i = 3; i * i <= temp; i = i + 2)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n /= i;
		}
	}
	// if (n > 2)
	// 	cout << n << endl;
	cout << endl;
}
int main()
{
	ll n;
	cin >> n;
	prime_factor(n);


}