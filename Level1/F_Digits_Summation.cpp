// [1,2,3,4,5,6]
// [1,2,3,5,4,6]

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
    long long int n, m;
    cin >> n >> m;
    long long ans = (n % 10 + m % 10);
    cout << ans << "\n";
    return 0;
}
// [1,2,3,4]
// [2,1,3,4]
// [1,2,3,4,5]
// [1,2,3,4,5,6]
