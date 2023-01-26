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
        vc ar(N);
        int p = 0, n = 0;
        for (int i = 0; i < ar.size(); i++)
        {
            cin >> ar[i];
            ar[i] == 1 ? p++ : n++;
        }
        if (abs(n - p) > 2)
            cout << "No" << '\n';
        else if (abs(n - p) == 2 && n & 1 == 1 && p & 1 == 1)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }
    return 0;
}

