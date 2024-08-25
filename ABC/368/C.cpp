#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> H(N);

    long long max_health = 0;
    long long total_health = 0;

    for (int i = 0; i < N; ++i) {
        cin >> H[i];
        total_health += H[i];
        max_health = max(max_health, H[i]);
    }

    // 最小のTを求める
    long long low = max_health / 3 * 2;
    long long high = max_health * 2;

    while (low < high) {
        long long mid = (low + high) / 2;
        long long damage = mid / 3 * 2 + mid % 3;

        bool can_defeat = true;
        for (int i = 0; i < N; ++i) {
            if (H[i] > damage) {
                can_defeat = false;
                break;
            }
        }

        if (can_defeat) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;

    return 0;
}
