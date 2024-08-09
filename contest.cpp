#include<bits/stdc++.h>


using namespace std;

using ll  = long long;
using ull = unsigned ll;
using ld  = long double;
using pi  = pair<int, int>;
using pii = pair<ll, ll>;
using vi  = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;
using viip = vector<pair<ll, ll>>;

const int MAX_N = 1e5 + 1;
ll mod = 1e9 + 7;
const ll INF = 1e18;

#define PI           3.141592653589793238
#define fir          first
#define sec          second
#define all(x)       (x).begin(),(x).end()
#define rall(x)      (x).rbegin(),(x).rend()
#define pb           push_back
#define mp           make_pair
#define loop(i,n,x)  for(int i=n;i<x;i++)
#define sz(a)        ((int) (a).size())
#define For(n,x)     for(int i=1;i<=x;i++)
#define ite          iterator it
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test         ll t;cin>>t; while(t--){solve();}
#define in           insert
#define ms(a,x)      memset(a, x, sizeof(a))

void oj()
{


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

}
ll bigmod(ll b, ll p, ll m)
{
    ll res = 1;
    while (p != 0)
    {   if (p % 2 != 0)
            res = ((res % m) * (b % m)) % m, p--;
        b = ((b % m) * (b % m)) % m, p /= 2;
    }
    return res;
}
ll MOD(ll num) { return ((num % mod + mod) % mod); }

ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }

ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }

ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }

ll modDiv(ll a, ll b) { return modMul(a, bigmod(b, mod - 2, mod)); }

ll lcm(ll a, ll b) {return (a / __gcd(a, b)) * b;}

ll ceilll(ll x, ll y) {return (x + y - 1ll) / y;}


void solve()

{

}









int main()
{


    ios_base::sync_with_stdio(false); cin.tie(NULL);

   oj();

   // test;
   solve();


    // int t;
    // cin >> t;
    // cin.ignore();
    // for ( int test_case = 1; test_case <= t; test_case++ )
    // {
    //  //cout << "Case " << test_case << ": ";
    //  solve();
    // }


}
