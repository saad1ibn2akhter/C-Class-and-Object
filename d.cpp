#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct PowerUp {
    int position;
    int value;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, L;
        cin >> n >> m >> L;

        vector<pair<int, int>> hurdles(n);
        for (int i = 0; i < n; ++i) {
            cin >> hurdles[i].first >> hurdles[i].second; // l, r
        }

        vector<PowerUp> powerUps(m);
        for (int i = 0; i < m; ++i) {
            cin >> powerUps[i].position >> powerUps[i].value; // x, v
        }

        // Initialize variables
        int currentPosition = 1;
        int currentPower = 1;
        int powerUpsCollected = 0;
        priority_queue<int> availablePowerUps; // Max-heap for power-ups
        int hurdleIndex = 0;

        while (currentPosition < L) {
            // Collect power-ups at the current position
            while (hurdleIndex < m && powerUps[hurdleIndex].position <= currentPosition) {
                availablePowerUps.push(powerUps[hurdleIndex].value);
                hurdleIndex++;
            }

            // Check if we can jump to the next hurdle or to L
            bool canJump = false;
            while (hurdleIndex < n && hurdles[hurdleIndex].first <= currentPosition + currentPower) {
                if (currentPosition + currentPower >= hurdles[hurdleIndex].first) {
                    canJump = true;
                    break;
                }
                hurdleIndex++;
            }

            if (canJump) {
                // If we can jump over the hurdle, move to the next hurdle
                currentPosition = hurdles[hurdleIndex].second + 1; // Move to the end of the hurdle
            } else {
                // If we cannot jump over the hurdle, we need to collect power-ups
                if (availablePowerUps.empty()) {
                    // No power-ups available to collect
                    cout << -1 << endl;
                    break;
                }

                // Collect the best available power-up
                currentPower += availablePowerUps.top();
                availablePowerUps.pop();
                powerUpsCollected++;
            }

            // If we can reach L, we are done
            if (currentPosition >= L) {
                cout << powerUpsCollected << endl;
                break;
            }
        }

        if (currentPosition < L) {
            cout << -1 << endl; // If we exit the loop without reaching L
        }
    }

    return 0;
}