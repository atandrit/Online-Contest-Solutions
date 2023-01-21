#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int ll>

void t_soln()
{
    string as, bs;
    cin >> as >> bs;
    if (as.find('S') != -1 && bs.find('M') != -1)
        cout << "<" << endl;
    else if (as.find('M') != -1 && bs.find('S') != -1)
        cout << ">" << endl;
    else if (as.find('S') != -1 && bs.find('L') != -1)
        cout << "<" << endl;
    else if (as.find('L') != -1 && bs.find('S') != -1)
        cout << ">" << endl;
    else if (as.find('M') != -1 && bs.find('L') != -1)
        cout << "<" << endl;
    else if (as.find('L') != -1 && bs.find('M') != -1)
        cout << ">" << endl;
    else
    {
        if (as.find('S') != -1)
            as.length() > bs.length() ? cout << "<" << endl : (as.length() < bs.length() ? cout << ">" << endl : cout << "=" << endl);
        else if (as.find('L') != -1)
            as.length() > bs.length() ? cout << ">" << endl : (as.length() < bs.length() ? cout << "<" << endl : cout << "=" << endl);
        else
            cout << "=" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        t_soln();
    }
    return 0;
}