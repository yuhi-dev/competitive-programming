#include <iostream>
using namespace std;

int D, B[100009];
int N, L[100009], R[100009];
int Answer[100009];

int main(){
    cin >> D;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    for (int i = 1; i <= N; i++){
        B[L[i]] += 1;
        B[R[i] + 1] -= 1;
        //cout << B[L[i]] << endl;
		//cout << B[R[i] + 1];
    }

    Answer[0] = 0;
    for (int j = 1; j <= D; j++){
        Answer[j] = Answer[j-1] + B[j];
        cout << Answer[j] << endl;
		//cout << B[j];
    }
	//cout << endl;
    return 0;
}