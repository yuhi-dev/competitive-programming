#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrange_cards(int N, int K, vector<int>& A) {
    vector<int> moved_cards(A.end() - K, A.end());
    vector<int> remaining_cards(A.begin(), A.end() - K);
    moved_cards.insert(moved_cards.end(), remaining_cards.begin(), remaining_cards.end());
    return moved_cards;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> result = rearrange_cards(N, K, A);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
