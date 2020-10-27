#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2="9999";

    string sum;
    string mult;
    int intmult;
    cin>>s1;
    if(s1.length()>s2.length())
        swap(s1,s2);
    int intsum;
    int len1=s1.length();
    int len2=s2.length();
    int carry=0;
    int carrym=0;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=0; i<len1; i++)
    {
        intsum=(s1[i]-'0')+(s2[i]-'0')+carry;
        intmult=(s1[i]-'0')*(s2[i]-'0')+carrym;
        mult.push_back(intmult%10+'0');

        sum.push_back(intsum%10+'0');
        carrym=intmult/10;
        carry=intsum/10;


    }
    for(int i=len1; i<len2; i++)
    {
        intsum=(s2[i]-'0')+carry;
        intmult=(s2[i]-'0')+carrym;
        sum.push_back(intsum%10+'0');
        mult.push_back(intmult%10+'0');
        carry=intsum/10;
        carrym=intmult/10;
    }
    if(carry)
        sum.push_back(carry+'0');
    if(carrym)
        mult.push_back(carrym+'0');
    reverse(sum.begin(),sum.end());
    reverse(mult.begin(),mult.end());
    cout<<sum<<endl<<mult<<endl;

}
