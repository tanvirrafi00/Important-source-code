#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100006

int main()
{
    vector<ll>div[mx+1];
    ll n, i, j, x;
    for(i=1; i<=mx; i++){
        for(j=i; j<=mx; j+=i){
            div[j].push_back(i);
        }
    }
    while(1){
        scanf("%lld", &x);
        printf("Divisors of %lld = ", x);
        for(i=0; i<div[x].size(); i++){
            printf("%lld ", div[x][i]);
        }
        printf("\n");
    }

    return 0;

}

