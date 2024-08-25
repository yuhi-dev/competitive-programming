#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count_operations(vector<int>& A) {
    int operations = 0;
    
    while (true) {
        vector<int> positives;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] > 0) positives.push_back(A[i]);
        }
        
        if (positives.size() <= 1) break;
        
        sort(positives.rbegin(), positives.rend());
        
        positives[0]--;
        positives[1]--;
        
        int pos_index = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] > 0) {
                A[i] = positives[pos_index];
                pos_index++;
            }
        }
        
        operations++;
    }
    
    return operations;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = count_operations(A);
    cout << result << endl;

    return 0;
}
