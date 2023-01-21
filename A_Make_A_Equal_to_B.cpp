#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    vc a(n), b(n);
    ll a1 = 0, b1 = 0;
    ll d = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i])
            a1++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i])
            b1++;
        if (a[i] != b[i])
            d++;
    }
    cout << min(abs(a1 - b1) + 1, d) << endl;
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

