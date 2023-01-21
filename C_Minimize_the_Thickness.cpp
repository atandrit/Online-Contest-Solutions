#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    vc a(n);
    ll s = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    ll res = n;
    ll t_s = 0, thk = 0;
    for (ll i = 0; i < n; i++)
    {
        t_s += a[i];
        thk++;
        ll t_thk = 0;
        if (!(s % t_s))
        {
            t_thk = thk;
            ll c_thk = 0;
            ll t = 0;
            for (ll j = i + 1; j < n; j++)
            {
                t += a[j];
                c_thk++;
                if (t == t_s)
                {
                    t_thk = max(t_thk, c_thk);
                    t = 0;
                    c_thk = 0;
                }
            }
            if (!t)
                res = min(res, t_thk);
        }
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        t_soln();
    }
    return 0;
}