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
        int n;
        cin >> n;
        vc a(n), p(n), s(n);
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        p[0] = a[0];
        for (int i = 1; i < a.size(); i++)
            p[i] = __gcd(p[i - 1], a[i]);
        s[s.size() - 1] = a[a.size() - 1];
        for (int i = a.size() - 2; i >= 0; i--)
            s[i] = __gcd(a[i], s[i + 1]);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (!i && s[i + 1] > 1)
                res++;
            else if (i == n - 1 && p[i - 1] > 1)
                res++;
            else if (__gcd(s[i + 1], p[i - 1]) > 1)
                res++;
        }
        cout << res << '\n';
    }
    return 0;
}