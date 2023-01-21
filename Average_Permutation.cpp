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
        int num;
        cin >> num;
        if (num == 3)
        {
            cout << 3 << " " << 2 << " " << 1 << '\n';
            continue;
        }
        cout << num << " " << num - 2 << " ";
        for (int i = 1; i < num - 3; i++)
        {
            cout << i << " ";
        }
        cout << num - 3 << " " << num - 1 << '\n';
    }
    return 0;
}


