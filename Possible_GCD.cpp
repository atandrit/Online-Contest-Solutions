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
        int a, b;
        cin >> a >> b;
        int dif = abs(a - b);
        int cnt = 0;
        for (int i = 1; i <= sqrt(dif); i++)
        {
            if (!(dif % i))
            {
                if (dif / i == i)
                    cnt++;
                else
                    cnt += 2;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}