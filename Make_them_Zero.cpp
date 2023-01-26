#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<ll>

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
        vc num(n);
        map<ll, ll> m;
        for (ll i = 0; i < num.size(); i++)
        {
            cin >> num[i];
            ll t = num[i];
            ll pos = 0;
            while (t > 0)
            {
                if (t & 1)
                    m.insert({pos, 1});
                pos++;
                t = t >> 1;
            }
        }
        cout << m.size() << '\n';
    }
    return 0;
}