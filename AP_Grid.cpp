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
        int n, m;
        cin >> n >> m;
        vector<vc> M(n, vc(m));
        M[0][0] = 1;
        if (n > m)
        {
            for (int i = 1; i < n; i++)
                M[i][0] = M[i - 1][0] + m;
            for (int i = 0; i < n; i++)
                for (int j = 1; j < m; j++)
                    M[i][j] = M[i][j - 1] + m + n - i;
        }
        else
        {
            for (int i = 1; i < m; i++)
                M[0][i] = M[0][i - 1] + n;
            for (int i = 0; i < m; i++)
                for (int j = 1; j < n; j++)
                    M[j][i] = M[j - 1][i] + m + n - i;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << M[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}