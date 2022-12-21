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
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    FAST int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a, b, c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            c.push_back(x);
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[j] = c[a[j] - 1];
            }
            c = b;
        }

        for (int j = 0; j < c.size(); j++)
        {

            cout << b[j] << "\n";
        }
    }
    return 0;
}