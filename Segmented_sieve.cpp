#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool arr[100009 + 1];
vector<int> v;

ll d, x, y;
void sieve()
{
    long int n;
    // int count=0;
    long long int max = 100009;
    arr[0] = 1;
    arr[1] = 1;
    v.push_back(2);
    for (int i = 4; i <= max; i += 2)
        arr[i] = 1;


    for (int i = 3; i * i <= max; i++)
    {
        if (arr[i] == false)
        {
            //v.push_back(i);
            for (int j = i * i; j <= max; j = j + i)
                arr[j] = 1;
        }
    }
    for (int i = 3; i <= max; i++)
        if (arr[i] == false)
        {
            v.push_back(i);

        }
    // for (ll int i = 0; i < v.size(); i++)
    // {
    //     ll x = 2 + v[i];
    //     if (arr[x] == false)
    //         v1.push_back(x);
    // }
}


void seg_sieve(ll l, ll r)
{

    bool isprime[r - l + 1] ;
    for (int i = 0 ; i < r - l + 1 ; i++)
        isprime[i] = true;

    if (l == 1)
        l++;

    for (int i = 0; v[i] * (long long)v[i] <= r; i++)
    {
        ll cuurent_prime = v[i];

        ll base = (l / cuurent_prime) * cuurent_prime;

        if (base < l)
            base += cuurent_prime;

        for (ll j = base; j <= r ; j += cuurent_prime)
            isprime[j - l] = false;
        if (base == cuurent_prime)
            isprime[base - l] = true;


    }
    for (int j = 0; j <= r - l; j++)
    {
        if (isprime[j] == true)
            cout << l + j << endl;
    }

}
int main()
{
    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        seg_sieve(l, r);
        cout << endl;
    }


}