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
        int n, x, y;
        cin >> n >> x >> y;
        int res = (n - 1) << 1;
        if ((x == 1 && y == 1) || (x == 1 && y == n) || (x == n && y == 1) || (x == n && y == n))
            res += (n - 1);
        else
        {
            int l, r;
            if (x <= y)
                l = (x - 1) + (n - y);
            else
                l = (n - x) + (y - 1);
            if (x + y >= n + 1)
                r = 2 * n - (x + y);
            else
                r = (x - 1) + (y - 1);
            res += (r + l);
        }
        cout << res << '\n';
    }
    return 0;
}