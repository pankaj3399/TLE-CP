#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mii map<int, int>
#define msi map<string, int>

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> ans(n);
        unordered_set<int> remove;
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        for (int i = 0; i < k; i++)
        {
            char myOpinion = ans[0][i];
            for (int j = 1; j < n; j++)
            {
                if (ans[j][i] != myOpinion)
                {
                    remove.insert(j);
                }
            }
        }
        cout << n - remove.size() << endl;
    }
    return 0;
}