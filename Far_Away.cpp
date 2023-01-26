#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vc a(n);
        for (ll i = 0; i < a.size(); i++)
            cin >> a[i];
        ll res = 0;
        for (ll i = 0; i < a.size(); i++)
            abs(m - a[i]) > abs(a[i] - 1) ? res += abs(m - a[i]) : res += abs(a[i] - 1);
        cout << res << endl;
    }
    return 0;
}