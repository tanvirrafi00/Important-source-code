#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool arr[100000001];
vector<int>v;
void sieve()
{
    long int n;
    // int count=0;
    long long int max=10000000;
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i*i<=max; i++)
    {
        if(arr[i]==false)
        {
            v.push_back(i);
            for(int j=i*i; j<=max; j=j+i)
                arr[j]=1;
        }
    }
    // for(int i=1; i<=max; i++)
    //if(arr[i]==false)
    //{
    //v.push_back(i);

    //}
}


ll binaryexpo(int x,int p)
{
    ll res=1;
    while(p!=0)
    {

        if(p%2==1)
        {
            res*=x;
            p--;
        }
        x*=x;
        p/=2;

    }
    return res;
}
ll bigmod(ll b,ll p,ll m)
{
    int res=1;
    while(p!=0)
    {
        if(p%2!=0)
        {
            res=((res%m)*(b%m))%m;
            p--;


        }

        b=((b%m)*(b%m))%m;
        p/=2;


    }
    return res;
}
ll gcd(long long int a,long long int b)
{
    while(a!=0)
    {
        long long int temp=b;
        b=a;
        a=temp%a;
    }
    return b;


}
int ext_gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = ext_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}
ll add(ll a,ll b,ll m)
{
    return (a%m+b%m)%m;
}
ll mul(ll a,ll b,ll m)
{
    return (a%m*b%m)%m;
}


int divisor(ll n)
{
    int i=0;
    int div=1;

    while(n!=1)
    {
        int count=1;
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                count++;
                n/=v[i];
            }
        }
        i++;
        div*=count;

    }
    return div;
    //cout<<div<<endl;

}

int main()
{
    while(1)
    {
        int a,b,x,y;
        cin>>a>>b;
        int ans=ext_gcd(a,b,x,y);
        cout<<ans<<endl;
        cout<<x<<endl<<y<<endl;
       cout<< gcd(a,b);

    }
}




