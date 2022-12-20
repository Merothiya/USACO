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
    FAST int t;
    // cin>>t;
    // freopen("speeding.in", "r", stdin);
    // freopen("speeding.out", "w", stdout);
    t = 1;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int lim[100] = {};
        int bes[100] = {};

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int b;
            cin >> b;
            int c = 0;
            for (int j = c; j < a + c; j++)
            {
                lim[j] = b;
                // cout << lim[j] << " ";
            }
            c += a;
        }
        for (int i = 0; i < m; i++)
        {
            int a = 0;
            cin >> a;
            int b = 0;
            cin >> b;
            int c = 0;
            for (int j = c; j < a + c; j++)
            {
                if (b - lim[j] > 0)
                {
                    bes[j] = b - lim[j];
                }

                cout << bes[j] << " ";
            }
            c += a;
        }
        // sort(bes, bes + 100);
        // cout << *max_element(bes, bes + 100) ? *max_element(bes, bes + 100) : 0;
    }
    return 0;
}