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
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    // cin>>t;
    t = 1;
    while (t--)
    {
        int a, b, g, n;
        cin >> n;
        int x[3] = {1, 2, 3};
        int ct[3] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> g;

            swap(x[a - 1], x[b - 1]);

            ct[x[g - 1] - 1]++;
        }
        // for(int i=0;i<n;i++){
        //     cout<<ct[i]<<"\n";
        //     }
        cout << max(max(ct[0], ct[1]), ct[2]);
    }
    return 0;
}