#include<bits/stdc++.h>

using namespace std;
#define ll long long
bool arr[100000001];
vector<int>v;
void sieve()
{
    long int n;
    // int count=0;
    long long int max=20000000;
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

int main()
{
    sieve();
    ll j=0;
    ll n;
    cin>>n;

    while(n!=1)
    {

        if(n%v[j]==0)
        {
            int count =0;
            while(n%v[j]==0)
            {
                count++;

                n/=v[j];

            }


                cout<<"("<<v[j]<<"^"<<count<<")";
                if(n!=1)
                    cout<<"*";

        }
        j++;


    }
    //if(arr[17644493]==false)
        //cout<<"prime"<<endl;
    //else
    //cout<<"not prime";



}
