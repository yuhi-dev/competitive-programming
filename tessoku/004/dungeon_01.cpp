#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[100009], B[100009];
int dp[100009];

int main(){
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int j = 0; j < N; j++) cin >> B[j];

    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i <= N; i++){
        dp[i] = min(dp[i-2] + B[i], dp[i-1] + A[i]);
    }

    cout << dp[N] << endl;
    return 0;
}