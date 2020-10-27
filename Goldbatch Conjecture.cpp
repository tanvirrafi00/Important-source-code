#include<bits/stdc++.h>
using namespace std;
int main()
{

    int count;
    int n;

    for(; ;)
    {
        int flag;
        count;
        int flag1=0;

        cin>>n;
        if(n==0)
            break;
        for(long int i=2; i<=n/2; i++)
        {
            long int temp=n-i;

            for(long int j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }

            }
            for(long int j=2; j<=sqrt(temp); j++)
            {
                if(temp%j==0)
                {
                    flag++;
                    break;
                }

            }
            if(count==0&&flag==0)
            {
                //cout<<n<<" "<<"="<<" "<<i<<" "<<"+"<<" "<<temp<<endl;
               // break;
               flag1++;

            }

            count=0;
            flag=0;


        }
        cout<<flag1<<endl;
    }
}
