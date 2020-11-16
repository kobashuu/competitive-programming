#include<bits/stdc++.h>
using namespace std;

int main() {
    string insert;
    cin >> insert;
    vector<int> mod(3,0);
    for(int i=0; i<insert.length(); i++){
        int place = (insert[i] - '0') % 3;
        mod.at(place)++;
    }
    /* 割り切れる場合 */
    int mod1, mod2;
    mod1 = mod.at(1) % 3;
    mod2 = mod.at(2) % 3;
    if(mod1==0&&mod2==0||mod1==1&&mod2==1||mod1==2&&mod2==2){
        cout << 0 << endl;
    }else if(mod1==0){
        if(mod2==1) cout << 2 << endl;
        else if(mod2==2) cout << 2 << endl;
    }else if(mod1==1){
        if(mod2==0) cout << 1 << endl;
        else if(mod2==2) cout << 1 << endl;
    }else if(mod1==2){
        if(mod2==1) cout << 1 << endl;
        else if(mod2==0) cout << 2 << endl;
    }
    else cout << -1 << endl;

    return 0;
}