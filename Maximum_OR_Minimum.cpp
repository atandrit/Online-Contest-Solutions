#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

void result(vc bin)
{
    int ones = accumulate(bin.begin(), bin.end(), 0);
    int zeroes = bin.size() - ones;
    zeroes <= ones ? cout << 1 << '\n' : cout << 0 << '\n';
}

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
        vc bin(n);
        for (int i = 0; i < bin.size(); i++)
            cin >> bin[i];
        result(bin);
    }
    return 0;
}