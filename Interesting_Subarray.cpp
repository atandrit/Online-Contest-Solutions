#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<long long int>

ll c_min(vc a)
{
    if (a.empty())
        return INT_MIN;
    ll mn = INT_MAX, mx = INT_MIN, e = abs(a[0]);
    for (ll i = 0; i < a.size(); i++)
    {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        e = min(e, abs(a[i]));
    }
    return min(mn * mx, e * e);
}

ll c_max(vc a)
{
    if (a.empty())
        return INT_MAX;
    ll mn = INT_MAX, mx = INT_MIN, e = abs(a[0]);
    for (ll i = 0; i < a.size(); i++)
    {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        e = max(e, abs(a[i]));
    }
    return max(mn * mx, e * e);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vc a(n);
        for (ll i = 0; i < a.size(); i++)
            cin >> a[i];
        cout << c_min(a) << " " << c_max(a) << endl;
    }
    return 0;
}