// #include <iostream>
// #include <vector>
// using namespace std;

// #define ll long long

// bool isPrime(int n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;

//     for (int i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// void solve() {
//     int n;
//     cin >> n;
//     if (n % 2 != 0) {
//         cout << -1 << endl;
//     } else {
//         vector<int> permutation;
//         for (int i = 1; i <= n; i += 2) {
//             permutation.push_back(i);
//         }
//         for (int i = 2; i <= n; i += 2) {
//             permutation.push_back(i);
//         }

//         int num = n+1;
//         int x = 2;

//         while(isPrime(num)){
//             num+=2;
//             x = num- permutation[n/2 -1];
//         }
//         int ind = (n-x)/2;
//         int index = n-ind -1 ;
//         // cout<<"num req:  "  << num <<" x::: "<<x<<endl;
//         swap(permutation[index], permutation[n/2]);

//         for (int i = 0; i < permutation.size(); i++) {
//             cout << permutation[i] << " ";
//         }cout<<endl;

//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

#define ll long long

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 != 0 || n <= 5)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<ll> permutation;
        for (ll i = 1; i <= n; i += 2)
        {
            permutation.push_back(i);
        }
        for (ll i = 2; i <= n; i += 2)
        {
            permutation.push_back(i);
        }

        // ll num = n + 1;
        ll num = permutation[n / 2 -1] +permutation[n / 2];
        ll x = 2;

        while (isPrime(num))
        {
            num += 2;
            x = num - permutation[n / 2 - 1];
        }

        ll ind = (n - x) / 2;
        ll index = n - ind - 1;

        swap(permutation[index], permutation[n / 2]);

        // Output
        for (ll i = 0; i < permutation.size(); i++)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}