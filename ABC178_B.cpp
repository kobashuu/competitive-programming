/* インクルードなど */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

int main() {
  ll a,b,c,d,e,f,g,h;
  cin >> a >> b >> c >> d;
  e = a*c;
  f = a*d;
  g = b*c;
  h = b*d;
  cout << max({e,f,g,h}) << endl;
}