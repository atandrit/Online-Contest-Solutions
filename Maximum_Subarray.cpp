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
    ll m;
    cin >> m;
    vc b(m);
    for (ll i = 0; i < b.size(); i++)
        cin >> b[i];
    ll sum = 0;
    for (ll i = 0, s = 0; i < a.size(); i++)
    {
        s += a[i];
        sum = max(sum, s);
    }
    for (ll i = a.size() - 1, s = 0; i >= 0; i--)
    {
        s += a[i];
        sum = max(sum, s);
    }
    for (ll i = 0; i < b.size(); i++)
        if (b[i] > 0)
            sum += b[i];
    cout << sum << endl;
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