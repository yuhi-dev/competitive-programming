#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    float N;
    cin >> N;
    float A, B;
    int ans;
    float step = 0.1;

    ans = 0;
    for (float x = -10; x < N; x += step){
        A = -1 * pow(x, 2) + 2 * x + 3;
        B = -2 * x;

        cout << x << " " << A << " " << B << " " << abs(A - B) << endl;

        if (abs(A - B) < 1e-6) {
            ans++;
            cout << "Intersection found at x = " << x 
                 << ", A = " << A 
                 << ", B = " << B << endl;
        }
        
    }
    
    cout << ans << endl;

    return 0;
}