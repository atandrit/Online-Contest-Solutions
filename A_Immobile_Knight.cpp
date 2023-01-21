#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    ll n, m;
    cin >> n >> m;
    if (n == 1 || m == 1)
    {
        cout << n << " " << m << endl;
        return;
    }
    if (n <= 3 && m <= 3)
    {
        cout << n - 1 << " " << m - 1 << endl;
        return;
    }
    cout << n << " " << m << endl;
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


