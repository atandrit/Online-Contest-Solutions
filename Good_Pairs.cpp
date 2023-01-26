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
        int N;
        cin >> N;
        vc a(N);
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int res = 0;
        int n = 1;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == a[i + 1])
                n++;
            if ((a[i] != a[i + 1]) || (i + 1 == a.size() - 1 && n != 1))
            {
                res += n * (n - 1) / 2;
                n = 1;
            }
        }
        cout << res << '\n';
    }
    return 0;
}