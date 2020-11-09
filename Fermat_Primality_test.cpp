#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mulmod(ll a, ll b, ll mod)
{
	ll res = 0;
	a = a % mod;
	while (b > 0)
	{

		if (b % 2 == 1)
			res = (res + a) % mod;


		a = (a * 2) % mod;


		b /= 2;
	}


	return res % mod;
}
ll bigmod(ll b, ll p, ll m)
{
	ll res = 1;

	while (p != 0)
	{
		if (p % 2 != 0)
		{
			res = mulmod(res, b, m) ;
			p--;
		}

		b = (mulmod(b, b, m)) ;
		p /= 2;
	}
	return res;
}
bool isprime(ll n, int iter = 20)
{
	if (n < 4)
		if ( n == 2 || n == 3)
			return true;
	for (int i = 1; i <= iter; i++)
	{
		ll a = 2 + rand() % (n - 3);
		ll res = (bigmod(a, n - 1, n));
		if (res != 1)
			return false;
	}
	return true;

}

int main()
{
	ll t;
	cin >> t;
	ll n;
	while (t--)
	{
		cin >> n;
		if (isprime(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;


	}
}
