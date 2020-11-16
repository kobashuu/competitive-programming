/* インクルードなど */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    int tmp;
    cin >> s >> t;
    int ans = t.length();
    for (int i = 0; i <= s.length() - t.length(); i++) {
        tmp = 0;
        for (int j = 0; j < t.length(); j++) {
            if (t[j] != s[i+j]) tmp++;
        }
        ans = min(tmp, ans);
    }
    cout << ans << endl;
}