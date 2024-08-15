#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int M, N, dp[1009][1009];
string S, T;

int main(){
    cin >> M >> N;
    cin >> S >> T;
    //M = S.size();
    //N = T.size();

    dp[0][0] = 0;
    for (int i = 0; i <= M; i++){
        for (int j = 0; j <= N; j++){
            if (i >= 1 && j >= 1 && S[i-1] == T[j-1]){
                dp[i][j] = min(dp[i][j], dp[i-1][j-1]);
            }
            else if (i >= 1 && j >= 1){
                dp[i][j] = min({dp[i][j], dp[i-1][j-1] + 1, dp[i-1][j] + 1, dp[i][j-1] + 1});
            }
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}