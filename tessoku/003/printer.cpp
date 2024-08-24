#include <iostream>
using namespace std;

long long N, K;
long long A[100009];

bool check(long long x){
    long long sum = 0;
    for (int i = 1; i <= N; i++) sum += x / A[i];
    if (sum >= K) return true;
    return false;
}