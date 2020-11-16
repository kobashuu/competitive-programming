/* インクルードなど */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

int main() {
  ll n, ans;
  cin >> n;
  ans = 0;
  ll a = 1;
  if (n < 2) {
      ans = 0;
  } else if(n == 2) {
      ans = 2;
  } else {
    for (ll i = 1; i <= n; i++) { 
    	a *= i;
    }
    b = a*10 % MOD
    ans += a*10-a) % MOD;
  }
  cout << ans << endl;
}