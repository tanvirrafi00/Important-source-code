#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(ll b,ll p,ll m)
{
    ll res=1;
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

int main()
{
    ll a,p,m;
    while(cin>>a>>p>>m)
    {

    ll res=(bigmod(a,p,m));
    cout<<res<<endl;
    }





}

