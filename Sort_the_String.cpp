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
        string bin;
        cin >> bin;
        int res = 0;
        for (int i = 0; i < bin.length() - 1; i++)
            if (bin[i] == '1' && bin[i + 1] == '0')
                res++;
        cout << res << '\n';
    }
    return 0;
}