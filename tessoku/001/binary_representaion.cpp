//my program
/*#include <iostream>
using namespace std;

int N, A[19];

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        if (N % 2 == 1){
            A[i] = 1;
            N = N / 2;
        }
        else if (N % 2 == 0){
            A[i] = 0;
            N = N / 2;
        }
        else{
            A[i] = 0;
        }
    }
    cout << A << endl;
    return 0;
}*/

//answer program
#include <iostream>
using namespace std;

int main() {
	// 入力
	int N;
	cin >> N;

	// 上の桁から順番に「2 進法に変換した値」を求める
	for (int x = 9; x >= 0; x--) {
		int wari = (1 << x); // 2 の x 乗
		cout << (N / wari) % 2; // 割り算の結果に応じて 0 または 1 を出力
	}
	cout << endl; // 最後に改行する
	return 0;
}