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
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    FAST int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, pair<int, int>> p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second.first >> p[i].second.second;
        }
        sort(p, p + n);

        int bu = 0;

        for (int i = 0; i < n; i++)
        {
            bool flag = 0;
            bu += p[i].second.second;
            for (int j = 0; j < n; j++)
            {

                if (p[i].second.first <= p[j].first)
                {

                    if (p[j].second.second >= p[i].second.second)
                    {

                        p[j].second.second -= p[i].second.second;
                        p[i].second.second = 0;
                    }
                    else
                    {

                        p[j].second.second = 0;
                        p[i].second.second -= p[j].second.second;
                    }

                    if (p[i].second.second <= 0)
                    {

                        break;
                    }
                    flag = 1;
                }
            }
        }
        cout << bu;
    }
    return 0;
}