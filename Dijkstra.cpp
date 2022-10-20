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
using viip = vector<pair<ll, ll>>;

const int MAX_N = 1e5 + 1;
ll mod = 1e9 + 7;
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
	freopen("Output.txt", "w", stdout);
#endif

}
ll bigmod(ll b, ll p, ll m)
{
	ll res = 1;
	while (p != 0)
	{	if (p % 2 != 0)
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

bool isPowerOfTwo (ll x) {return x && (!(x & (x - 1)));}


ll gcd(long long int a, long long int b)
{
	while (a != 0)
	{
		long long int temp = b;
		b = a;
		a = temp % a;
	}
	return b;

}
bool cmp(pair<ll, ll>a, pair<ll, ll>b)
{
	return a.second < b.second;

}
vip adj[10000];
vii dis(1e5, INF);
void bfs(int src)
{
	priority_queue<pair<int, int>, viip, greater<pair<int, int>>>pq;
	pq.push({0, src});
	dis[src] = 0;
	while (!pq.empty())
	{
		int curw = pq.top().first;
		int curnode = pq.top().second;
		pq.pop();
		for (auto edge : adj[curnode])
		{
			if (curw + edge.second < dis[edge.first])
			{
				dis[edge.first] = curw + edge.second;
				pq.push({dis[edge.first], edge.first});
			}

		}
	}

}

void solve()
{

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].pb(mp(v, w));
		adj[v].pb(mp(u, w));


	}
	bfs(1);
	for (int i = 1; i <= n; i++)
		cout << dis[i] << " ";
	cout << endl;


}





int main()
{


	ios_base::sync_with_stdio(false); cin.tie(NULL);

	oj();

	//test;

	solve();


	// int t;
	// cin >> t;
	// for ( int test_case = 1; test_case <= t; test_case++ )
	// {
	// 	cout << "Case " << test_case << ": ";
	// 	solve();
	// }


}