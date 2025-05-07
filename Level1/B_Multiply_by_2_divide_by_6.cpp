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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // find prime factors of n
        // if anything else than 2/3 return -1
        // else return pow 3 + pow 3 - pow 2
        // if pow 2 is more return -1

        unordered_map<int, int> primes;
        while (n % 2 == 0)
        {
            primes[2]++;
            n = n / 2;
        }
        while (n % 3 == 0)
        {
            primes[3]++;
            n = n / 3;
        }
        if (n > 2)
            cout << -1 << "\n";
        else if (primes[2] > primes[3])
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << 2 * primes[3] - primes[2] << "\n";
        }
    }
    return 0;
}
// [1,2,3,4]
// [2,1,3,4]
// [1,2,3,4,5]
// [1,2,3,4,5,6]
