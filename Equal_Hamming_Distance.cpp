#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define fo(i, N) for (long long i = 0; i < (N); ++i)
#define foe(i, N) for (long long i = 1; i <= (N); ++i)
#define fox(i, x, b) for (long long i = (x); i < (b); ++i)
#define forev(i, N) for (long long i = (N); i >= 0; --i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vc vector<long long>

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int hel(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}
int bis(int a, int b)
{
    if (b == 0)
        return 1;
    int temp = bis(a, b / 2);
    temp = hel(temp, temp);
    if (b % 2)
        return hel(temp, a);
    return temp;
}
int mi(int a, int m = mod)
{
    return bis(a, m - 2);
}
const int s = 2e5 + 1;
int fact[s], ifact[s];
void pre_comp()
{
    fact[0] = ifact[0] = 1;
    for (int i = 1; i < s; i++)
    {
        fact[i] = hel(fact[i - 1], i);
        ifact[i] = hel(ifact[i - 1], mi(i));
    }
}
void t_soln()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            cnt++;
    }
    if ((n - cnt) % 2)
    {

        cout << 0 << '\n';
        return;
    }
    n -= cnt;
    int flag = bis(2, cnt);
    flag = hel(flag, hel(fact[n], hel(ifact[n / 2], ifact[n / 2])));
    cout << flag << '\n';
}
int32_t main()
{
    pre_comp();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        t_soln();
    }
    return 0;
}
