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
        vc a(n);
        int t = -1;
        a[a.size() - 1] = n;
        for (int i = a.size() - 2; i >= 0; i--)
        {
            a[i] = a[i + 1] + (i + 1) * t;
            t *= -1;
        }
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << '\n';
    }
    return 0;
}