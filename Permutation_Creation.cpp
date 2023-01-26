#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    else if (n == 4)
    {
        cout << "3 1 4 2" << endl;
        return;
    }
    ll d = (n + 1) >> 1;
    vc a;
    a.push_back(1);
    for (ll i = 1; i < n; i++)
    {
        if (i & 1)
            a.push_back(abs(a[i - 1] + d));
        else
            a.push_back(abs(a[i - 1] - d + 1));
    }
    for (auto i : a)
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