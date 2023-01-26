#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string e = "";
        ll p = 0, m = 0, d = 0;
        vc D(10);
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '+')
                p++;
            else if (s[i] == '-')
                m++;
            else
            {
                d++;
                D[s[i] - '0']++;
            }
        }
        int pos = 9;
        while (d - (p + m))
        {
            if (!D[pos])
            {
                pos--;
                continue;
            }
            e += (pos + '0');
            D[pos]--;
            d--;
        }
        while (p)
        {
            if (!D[pos])
            {
                pos--;
                continue;
            }
            e += '+';
            e += (pos + '0');
            D[pos]--;
            p--;
        }
        while (m)
        {
            if (!D[pos])
            {
                pos--;
                continue;
            }
            e += '-';
            e += (pos + '0');
            D[pos]--;
            m--;
        }
        cout << e << endl;
    }
    return 0;
}