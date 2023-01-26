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
        vc t(n);
        for (int i = 0; i < t.size(); i++)
            cin >> t[i];
        sort(t.begin(), t.end());
        int r = 0, c = 1;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == t[i + 1])
                c++;
            else
            {
                r = max(r, c + t[i] - 1);
                c = 1;
            }
        }
        cout << r << '\n';
    }
    return 0;
}