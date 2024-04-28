#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int p[700];

    for(int tar = 1, i = 0, j = 1; tar <= 100000;j ++, i ++){
        tar = j * j;
        p[i] = tar;
    }

    while(cin >> a >> b){
        if(!a && !b) return 0;
        int ans = 0;
        for(int i = 0;;i ++){
            if(p[i] >= a && p[i] <= b) ans ++;
            else if(p[i] > b) break;
        }
        cout << ans << endl;
    }
    return 0;
}
