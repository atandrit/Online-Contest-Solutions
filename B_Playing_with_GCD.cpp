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
    for (ll i = 0; i < n - 2; i++)
    {
        if (__gcd(a[i], a[i + 2]) > __gcd(a[i], a[i + 1]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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