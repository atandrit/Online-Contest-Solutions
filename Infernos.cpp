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
        vc h(n);
        for (int i = 0; i < h.size(); i++)
            cin >> h[i];
        int t1 = 0, t2 = 0, s = 0, i = 0;
        t1 = *max_element(h.begin(), h.end());
        for (int i = 0; i < h.size(); i++)
        {
            if (h[i] % x)
                t2 += h[i] / x + 1;
            else
                t2 += h[i] / x;
        }
        cout << min(t1, t2) << '\n';
    }
    return 0;
}