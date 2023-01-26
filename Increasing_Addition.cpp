#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n, q;
    cin >> n >> q;
    vc a(n);
    for (ll i = 0; i < a.size(); i++)
        cin >> a[i];
    while (q--)
    {
        ll p, x;
        cin >> p >> x;
        a[p - 1] = x;
        ll r = 0;
        for (ll i = 0; i < a.size() - 1; i++)
        {
            if (a[i] > a[i + 1])
                r = max(r, abs(a[i] - a[i + 1]));
        }
        cout << r << endl;
    }
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
