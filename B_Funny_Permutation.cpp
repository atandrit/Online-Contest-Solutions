#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n;
    cin >> n;
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << 2 << " " << 1 << endl;
        return;
    }
    cout << n - 1 << " " << n << " ";
    for (ll i = 1; i <= n - 2; i++)
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

