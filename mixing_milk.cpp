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
    // freopen("mixmilk.in", "r", stdin);
    // freopen("mixmilk.out", "w", stdout);
    FAST int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        int cap[3], fin[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> cap[i] >> fin[i];
        }

        // for (int i = 0; i < 100; i++)
        // {
        //     int a;
        //     if (i % 3 == 0)
        //     {
        //         a = fin[1];
        //         fin[1] = min(cap[1], fin[0] + fin[1]);
        //         fin[0] -= (fin[1] - a);
        //     }
        //     if (i % 3 == 1)
        //     {
        //         a = fin[2];
        //         fin[2] = min(cap[2], fin[2] + fin[1]);
        //         fin[1] -= (fin[2] - a);
        //     }
        //     if (i % 3 == 2)
        //     {
        //         a = fin[0];
        //         fin[0] = min(cap[0], fin[0] + fin[2]);
        //         fin[2] -= (fin[0] - a);
        //     }
        // }
        for (int i = 0; i < 100; i++)
        {
            int a = fin[(i + 1) % 3];
            fin[(i + 1) % 3] = (fin[(i + 1) % 3] + fin[(i) % 3]) > cap[(i + 1) % 3] ? cap[(i + 1) % 3] : (fin[(i + 1) % 3] + fin[(i) % 3]);
            fin[(i) % 3] -= fin[(i + 1) % 3] - a;

            // cout << "\n";
        }
        for (int i = 0; i < 3; i++)
        {
            cout << fin[i] << " ";
        }
    }
    return 0;
}