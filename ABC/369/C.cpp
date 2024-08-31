#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = N;

    for (int i = 0; i < N - 1; ) {
        int d = A[i + 1] - A[i];
        int j = i + 1;

        while (j < N && A[j] - A[j - 1] == d) {
            j++;
        }

        int length = j - i;
        count += (length * (length - 1)) / 2;

        i = j - 1; 
    }

    cout << count << endl;

    return 0;
}
