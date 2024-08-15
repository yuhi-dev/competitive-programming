#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  int sum = 0;
  for (int i = 0; i < N; i++){
    sum += vec.at(i);
  }

  int mean = sum / N;
  for (int i = 0; i < N; i++){
    if (vec.at(i) > mean) {
      cout << vec.at(i) - mean << endl;
    }
    else {
      cout << mean - vec.at(i) << endl;
    }
  }
}