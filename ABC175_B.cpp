#include <bits/stdc++.h>
using namespace std;
// int N が既に与えられているとする. 

int main(){
    int N, c;
    c = 0;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
     cin >> vec.at(i);
    }
    /* 達していない時 */
    if (N < 3) {
        cout << 0 << endl;
        return 0;
    }

    std::sort(vec.begin(), vec.end());
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            if (vec[i] != vec[j]) {
                for (int k = j+1; k < N; k++) {
                    /* 全要素が異なるかつ足した数が一番大きい辺と等しくなければ三角形 */
                    if (vec[j] != vec[k] && vec[i] + vec[j] > vec[k]) 
                        c++;
                }
            }
        }
        
    }
    cout << c << endl;
}