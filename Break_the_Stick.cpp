#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        if (x & 1)
            cout << "YES\n";
        else
        {
            if ((n - x) & 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}

