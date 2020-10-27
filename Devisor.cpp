#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool arr[10000001];
vector<int>v;
void sieve()
{
    long int n;
    // int count=0;
    long long int max=1000000;
    arr[0]=1;
    arr[1]=0;
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

int main()
{
    sieve();
    ll n;
    cin>>n;
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
    cout<<div<<endl;
}

