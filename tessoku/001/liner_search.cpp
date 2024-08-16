//my cord
#include <iostream>
#include <vector>
using namespace std;

int N, X;
vector<int> A;
bool ans;

int main(){
    cin >> N >> X;
    A.resize(N);
    ans = false;
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
        if (A.at(i) == X){
            ans = true;
        }
    }
    if (ans == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}

// answer cord
/*#include <iostream>
using namespace std;

int N, X, A[109];
bool Answer = false;

int main(){
    cin >> N >> X;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    }
    for (int i = 1; i <= N; i++){
        if(A[i] == X){
            Answer = true;
        }
    }

    if (Answer == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "N0" << endl;
    }
    return 0;
}*/