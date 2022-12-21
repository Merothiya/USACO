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
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    FAST int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        y = y - x;
        x = 0;
        int d = 0;
        for (int i = 0;; i++)
        {
            if (i % 2 == 0)
            {
                if ((abs(y) <= (powl(2, i))) && y > 0)
                {
                    d += abs(y);
                    break;
                }
                else
                {
                    d += 2 * powl(2, i);
                }
            }
            else
            {
                if ((y >= (-powl(2, i))) && y < 0)
                {
                    d += abs(y);
                    break;
                }
                else
                {
                    d += 2 * powl(2, i);
                }
            }
            // cout << d << " ";
        }
        cout << d;
    }
    return 0;
}