#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    vc v(n);
    for (ll i = 0; i < v.size(); i++)
        cin >> v[i];
    ll mp = 0;
    for (ll i = 0; i < v.size(); i++)
        if (v[i] > v[mp])
            mp = i;
    if (!mp)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << mp << endl;
        for (ll i = 0; i < mp; i++)
            cout << v[i] << " ";
        cout << endl
             << v.size() - mp << endl;
        for (ll i = mp; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
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