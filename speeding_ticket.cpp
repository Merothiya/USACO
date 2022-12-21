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
    // freopen("speeding.in", "r", stdin);
    // freopen("speeding.out", "w", stdout);
    FAST int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int y;
            cin >> y;
            for (int j = 0; j < x; j++)
            {

                a.push_back(y);
            }
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            int y;
            cin >> y;
            for (int j = 0; j < x; j++)
            {
                b.push_back(y);
            }
        }
        for (int i = 0; i < 100; i++)
        {
            b[i] = b[i] - a[i];
        }
        sort(b.begin(), b.end());
        // for (int i = 0; i < 100; i++)
        // {
        //     cout << b[i] << " ";
        // }

        cout << ((b[99] > 0) ? b[99] : 0);
    }
    return 0;
}