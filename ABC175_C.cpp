#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  	long long X, K, D;
    long long a, b;
	cin >> X >> K >> D;
    if (X == D && K % 2 == 0) {
        X = D;
    } else if (X == D) {
        X = 0;
    } else {
  	    for(int i = 0; i < K; i++) {
            a = X - D;
            b = X + D;
          	if (abs(a) > abs(b)) X += D;
          	else X -= D;
        }
    }
    cout << abs(X) << endl;
}