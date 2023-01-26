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
        int n, k;
        cin >> n >> k;
        int a = n / 5, b = k / 5;
        if (!(n % 5))
            a--;
        if (!(k % 5))
            b--;
        cout << a - b << '\n';
    }
    return 0;
}
