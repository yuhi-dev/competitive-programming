#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<char> S(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> S[i];
    }

    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(101, vector<int>(101, INT_MAX)));
    
    dp[0][0][0] = 0;

    for (int i = 0; i < N; i++) {
        for (int l = 0; l <= 100; l++) {
            for (int r = 0; r <= 100; r++) {
                if (dp[i][l][r] == INT_MAX) continue;
                if (S[i] == 'L') {
                    dp[i + 1][A[i]][r] = min(dp[i + 1][A[i]][r], dp[i][l][r] + abs(l - A[i]));
                }
                if (S[i] == 'R') {
                    dp[i + 1][l][A[i]] = min(dp[i + 1][l][A[i]], dp[i][l][r] + abs(r - A[i]));
                }
            }
        }
    }

    int min_fatigue = INT_MAX;
    for (int l = 0; l <= 100; l++) {
        for (int r = 0; r <= 100; r++) {
            min_fatigue = min(min_fatigue, dp[N][l][r]);
        }
    }

    cout << min_fatigue << endl;

    return 0;
}
