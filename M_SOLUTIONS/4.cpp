#include <iostream>
using namespace std;
 
int main(void)
{
    int N,i;
    long stock,funds;
    funds = 1000;
    stock = 0;
    cin >> N;
    int A[N];
    for(i = 0; i < N; i++) cin >> A[i];
    for(i = 0; i < N; i++) {
        if(A[i] < A[i+1] && i != N-1) {
            while(funds - A[i] >= 0) {
                funds -= A[i];              /* 残りのお金 */
                stock++;                    /* 持ってる株 */
            }
        } else {
            funds += stock * A[i];          /* 金増やす */
            stock = 0;                      /* 全売り */
        }
 
    }
    cout << funds << endl;
}