#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, o, n, s) for (auto i{o}; i < n; i += s)
#define input_array(arr, n)                 \
    for (int index = 0; index < n; index++) \
        cin >> arr[index];
#define int long long
using namespace std;

signed main()
{
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    FAST int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        int m, n, k;
        cin >> m >> n >> k;
        string s[m];
        for (int i = 0; i < m; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < m * k; i++)
        {
            for (int j = 0; j < n * k; j++)
            {
                cout << s[i / k][j / k];
            }
            cout << "\n";
        }
    }
    return 0;
}