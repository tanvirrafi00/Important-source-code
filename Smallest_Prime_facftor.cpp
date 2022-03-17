#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
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

#define MAXN 1000001

int arr[100009];
int mx = 100009;
int hash1[100009];
vector<int>v;
void sieve()
{
	// int count=0;
	//  long long int max = n;
//	mx = n;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i  <= mx; i++)
	{
		arr[i] = i;

	}
	for (int i = 4; i  <= mx; i += 2)
	{
		arr[i] = 2;
	}
	for (int i = 3; i * i <= mx; i ++)
	{
		if (arr[i] == i)
		{
			for (int j = i * i; j <= mx; j += i)
			{
				if (arr[j] == j)
					arr[j] = i;
			}

		}
	}

}
int main()
{
	sieve();
	int n;
	cin >> n;
	int a[n];
	loop(i, 0, n)
	cin >> a[i];
	loop(i, 0, n)
	cout << arr[a[i]] << endl;
}