#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds ;
template <typename PB>

using oset = tree<PB, null_type, less<PB>, rb_tree_tag, tree_order_statistics_node_update> ;



using ll  = long long;
using ull = unsigned ll;
using ld  = long double;
using pi  = pair<int, int>;
using pii = pair<ll, ll>;
using vi  = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;

const int MAX_N = 1e5 + 1;
const ll mod = 1e9 + 7;
const ll INF = 1e9;

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
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

bool isPowerOfTwo (int x)
{

    return x && (!(x & (x - 1)));
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
vector<int> sub(vi x, vi y)
{

    reverse(all(x));
    reverse(all(y));
    vi ans;
    vi res;
    int len = sz(y);
    for (int i = 0; i < len; i++)
    {
        if (x[i] < y[i])
        {
            x[i + 1]--;
            ans.pb(x[i] + 10 - y[i]);
        }
        else
        {
            ans.pb(x[i] - y[i]);
        }
    }
    if (sz(x) > sz(y))
    {
        for (int i = len; i < sz(x); i++)
        {
            if (x[i] < 0)
            {
                x[i + 1]--;
                ans.pb(x[i] * 10);
            }
            else
                ans.pb(x[i]);
        }
    }
    reverse(all(ans));
    int i = 0;

    while (ans[i] == 0)
        i++;
    for ( ; i < sz(ans); i++)
        res.pb(ans[i]);
    return res;
}


void solve()
{

    string a, b;

    cin >> a >> b;

    vi num1, num2;
    for (int i = 0; i < sz(a); i++)
    {
        num1.pb(a[i] - '0');
    }
    for (int i = 0; i < sz(b); i++)
    {
        num2.pb(b[i] - '0');
    }
    vi ans = sub(num1, num2);
    for (auto it : ans)
        cout << it;
    cout << endl;





}






int main()
{


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    oj();

    // test;

    solve();


    // int t;
    // cin >> t;
    // for ( int test_case = 1; testcase <= t; test_case++ )
    // {
    //  cout << "Case " << test_case << ":" << endl;
    //  solve();
    // }


}

