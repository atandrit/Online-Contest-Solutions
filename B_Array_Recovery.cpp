#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    vc d(n);
    for (ll i = 0; i < d.size(); i++)
        cin >> d[i];
    vc r;
    r.push_back(d[0]);
    for (ll i = 1; i < d.size(); i++)
    {
        if (r[i - 1] + d[i] != r[i - 1] - d[i] && r[i - 1] - d[i] > 0 && r[i - 1] + d[i] > 0)
        {
            cout << -1 << endl;
            return;
        }
        r.push_back(r[i - 1] + d[i]);
    }
    for (auto i : r)
        cout << i << " ";
    cout << endl;
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