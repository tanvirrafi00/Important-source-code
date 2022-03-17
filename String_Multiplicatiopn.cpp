#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s1;
    string s2;


    while ( cin >> s1 >> s2)
    {


        // if (s1.length() > s2.length())
        //     swap(s1, s2);

        int len1 = s1.length();
        int len2 = s2.length();
        vector<ll> mult(len1 + len2, 0);

        ll carrym ;
        // reverse(s1.begin(), s1.end());
        // reverse(s2.begin(), s2.end());
        int k = 0, p = 0;
        for (int i = len1 - 1; i >= 0; i--)
        {
            carrym = 0;
            k = 0;

            for (int j = len2 - 1; j >= 0; j--)
            {
                ll intmult = ((s1[i] - '0') * (s2[j] - '0')) + carrym + mult[k + p];

                mult[k + p] = intmult % 10;


                carrym = intmult / 10;
                k++;


            }
            if (carrym > 0)
                mult[k + p] += carrym;
            p++;



        }
        int x = mult.size() - 1;
        while (x >= 0 && mult[x] == 0)
            x--;

        if (x == -1)
        {
            cout << "0" << endl;
            continue;

        }
        else
        {
            string s = "";

            while (x >= 0)
                s += std::to_string(mult[x--]);
            cout << s << endl;


        }
        s1.erase();
        s2.erase();
    }

}
