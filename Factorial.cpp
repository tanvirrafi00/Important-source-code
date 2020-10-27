#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q=2;
    int arr[100000]={0};
    arr[0]=1;
    int cnt=0;
    int len=1;
    int carry=0;
    while(q<=n)
    {
        cnt=0;
        carry=0;
        while(cnt<len)
        {
            arr[cnt]=arr[cnt]*q+carry;
            carry=arr[cnt]/10;
            arr[cnt]%=10;
            cnt++;

        }
        while(carry!=0)
        {
            arr[len]=carry%10;
            carry/=10;
            len++;
        }



        q++;

    }
  //  for(int i=len-1;i>=0;i--)
       // cout<<arr[i];
       cout<<"Number of digits of "<<n<<"! is "<<len<<endl;

}
