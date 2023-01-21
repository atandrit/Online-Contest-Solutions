#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    vc a(n);
    for (ll i = 0; i < a.size(); i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll res = INT_MAX;
    for (ll i = 0; i < a.size() - 2; i++)
    {
        ll tmp = abs(a[i] - a[i + 1]);
        tmp += abs(a[i + 1] - a[i + 2]);
        res = min(res, tmp);
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