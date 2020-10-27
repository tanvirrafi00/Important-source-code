#include<bits/stdc++.h>

using namespace std;
#define  ll long long

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
int bigmod(ll b,ll p,ll m)
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
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
}
