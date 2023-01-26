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
        int n, x;
        cin >> n >> x;
        if (x < n)
        {
            cout << -1 << '\n';
            continue;
        }
        cout << x - n + 1 << " ";
        for (int i = 1; i <= n; i++)
            if (i != x - n + 1)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}