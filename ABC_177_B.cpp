/* インクルードなど */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S, T, copy_T;
    int count = 1;
    cin >> S;
    cin >> T;
    int length = T.length();
    while (T.length() != 1) {
        copy_T = T;
        while (copy_T.length() != 1) {
            if (S.find(copy_T)) {
                count = copy_T.length();
                copy_T = "en";
                T = "en";
            }
            copy_T.erase(0);
            
        }
        T.erase(0);
    }
    cout << length - count << endl;
}