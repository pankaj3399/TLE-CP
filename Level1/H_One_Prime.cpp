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
    int x;
    cin >> x;
    bool prime = true;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << "NO" << "\n";
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << "YES" << "\n ";
    }

    return 0;
}