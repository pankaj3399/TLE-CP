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

// // basic is prime O(n)
// bool isPrime(ll n)
// {
//     if (n == 1)
//         return false;
//     for (ll i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// // basic is prime O(n^0.5)
// bool isPrimeOptimized(ll n)
// {
//     if (n == 1)
//         return false;
//     for (ll i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// // prime factorization O(nlogn)
// vector<pair<ll, ll>> primeFactors(ll n)
// {
//     vector<pair<ll, ll>> ans;
//     for (ll i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ll cnt = 0;
//             while (n % i == 0)
//             {
//                 cnt++;
//                 n = n / i;
//             }
//             ans.push_back({i, cnt});
//         }
//     }
//     return ans;
// }

// // prime factorization O((n^0.5)logn)
// vector<pair<ll, ll>> primeFactorsOptimized(ll n)
// {
//     vector<pair<ll, ll>> ans;
//     for (ll i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ll cnt = 0;
//             while (n % i == 0)
//             {
//                 cnt++;
//                 n = n / i;
//             }
//             ans.push_back({i, cnt});
//         }
//     }
//     if (n > 1)
//     {
//         ans.push_back({n, 1});
//     }
//     return ans;
// }

// // sieve of eratosthenes O(nloglogn)
// vector<bool> sieve(ll n)
// {
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             for (ll j = i * i; j <= n; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     return isPrime;
// }

// // sieve of eratosthenes O(nloglog(n^0.5))
// vector<bool> sieveOptimized(ll n)
// {
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i * i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             // change here
//             for (ll j = i * i; j <= n; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     return isPrime;
// }

// // O(R-L+1loglog(R)) + O(R^0.5 log log R^0.5)
// vector<bool> getPrimesInRange(ll L, ll R)
// {
//     vector<bool> prime = sieveOptimized(sqrt(R));
//     vector<bool> isPrime(R - L + 1, true);
//     for (ll i = 2; i * i <= R; i++)
//     {
//         if (!isPrime[i])
//             continue;
//         for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//         {
//             isPrime[j - L] = false;
//         }
//     }
//     if (L == 1)
//         isPrime[0] = false;
//     return isPrime;
// }

// 3 4 5 6 7

// op - 4

// 4 5 6 7 8 9 10

// find no of primes in this range - that much K we should have
void solve()
{
    ll l, r, k;
    cin >> l >> r >> k;
    if (l == r)
    {
        if (l == 1)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }
    int total = r - l + 1;
    int even = r / 2 - (l - 1) / 2;
    int odd = total - even;
    if (odd <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // vector<bool> isPrime = getPrimesInRange(l, r);
    // int n = 0;
    // for (auto i : isPrime)
    // {
    //     if (i)
    //     {
    //         n++;
    //     }
    // }
    // if (k == 0 && l == r)
    // {
    //     if (l > 1)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // if (k >= n)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}