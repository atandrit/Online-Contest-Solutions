#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

int P_Sort(int arr[], int n)
{
    int i, j, flag = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag++;
            }
            if (flag > 1)
            {
                cout << "NO\n";
                return 0;
            }
        }
    cout << "YES\n";
    return 0;
}

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
        int *ar = new int[N];
        for (int i = 0; i < N; i++)
            cin >> ar[i];
        P_Sort(ar, N);
    }
    return 0;
}