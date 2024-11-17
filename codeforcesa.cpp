#include <bits/stdc++.h>

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
    
    unordered_map<int, int> freq;
    for (int num : vec)
    {
        freq[num]++;
    }
    
    int score = 0;
    for (const auto& pair : freq)
    {
        score += pair.second / 2;
    }
    
    cout << score << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}