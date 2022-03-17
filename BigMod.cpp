#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(ll b, ll p, ll m)
{
    ll res = 1;
    while (p != 0)
    {
        if (p % 2 != 0)
        {
            res = ((res % m) * (b % m)) % m;
            p--;
        }

        b = ((b % m) * (b % m)) % m;
        p /= 2;
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll a, b, c, m;
    int t;
    cin >> t;

    while (t--)
    {

        cin >> a >> b;
        m = 10;

        ll res = (bigmod(a, b, m));

        cout << res << endl;
    }



}
