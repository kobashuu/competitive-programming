#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> time(5);
  	vector<int> time1(5);
  	int ans = 0;
  	// 入力
	for (int i=0; i<5; i++) {
	  	cin >> time.at(i);
    }
    // 10の倍数なら足しとく
    // 10の倍数でないならtime1に突っ込む
    for (int i=0; i<5; i++) {
	  	if (time.at(i) % 10 == 0) {
            ans += time.at(i);
        } else {
            time1.push_back(time.at(i));
        }
    }
    // 余りを並べる → 最大値とそのインデックスをとってくる
    int mod, a = MOD(time1)
    for (int i=0; i<time1e)
  	ans +=  10*divideNum;
  	ans += time.at(0);
  	cout << ans << endl;
}

int MOD(vector x) {
    int a;
    int minMod = 9;
    for (int i=0; i<5; i++) {
        if (minMod > x.at(i)) {
            minMod = x.at(i)
            a = i;
        }
    }
    return minMod, a;
}