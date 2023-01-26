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
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        int c = 0;
        sort(a.begin(), a.end());
        for (int i = 1; i < a.size(); i++)
            if (a[i] == a[i - 1])
                c++;
        !c &&n & 1 ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}