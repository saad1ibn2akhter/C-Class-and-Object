// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//     }

//     ll num = n - 2;

//     unordered_map<int, int> freq;
//     for (int num : vec)
//     {
//         freq[num]++;
//     }
//     bool f = false;
//     if (!f)
//     {
//         for (int i = 1; i <= num; i++)
//         {
//             if (num % i == 0 && freq[i] >= 1 && freq[num / i] >= 1)
//             {
//                 cout << i << " " << num / i << endl;
//                 f = true ;
//                 break;
//             }
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    ll num = n - 2;
    unordered_map<int, int> freq;
    for (int num : vec)
    {
        freq[num]++;
    }

    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            int div1 = i;
            int div2 = num / i;

            if (freq[div1] >= 1 && freq[div2] >= 1)
            {
                cout << div1 << " " << div2 << endl;
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}