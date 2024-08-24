#include <iostream>
using namespace std;

int N, A[100009], X;

int search(int x){
    int L = 1, R = N;
    while (L <= R) {
        int M = (L + R) / 2;
        if (x < A[M]) R = M - 1;
        if (x == A[M]) return M;
        if (x > A[M]) L = M + 1;
    }
    return -1;
}

int main(){
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];

    int Answer = search(X);
    cout << Answer << endl;
    return 0;
}