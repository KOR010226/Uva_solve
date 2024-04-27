#include <bits/stdc++.h>
using namespace std;
#define N 100010
// up, down, west, east, north, south

int main(){
    int d[6] = {1, 6, 3, 4, 2, 5};

    int n;

    while(cin >> n){
        int a[6] = {1, 6, 3, 4, 2, 5};
        if(n == 0)break;
        string s;

        for(int i = 0 ;i < n ;i ++){
            cin >> s;

            if(s == "north"){
                int sw1 = a[0], sw2 = a[1];
                a[0] = a[5], a[1] = a[4];
                a[4] = sw1, a[5] = sw2;
            }
            else if(s == "south"){
                int sw1 = a[1], sw2 = a[0];
                a[0] = a[4], a[1] = a[5];
                a[4] = sw1, a[5] = sw2;
            }
            else if(s == "west"){
                int sw1 = a[0], sw2 = a[1];
                a[0] = a[3], a[1] = a[2];
                a[2] = sw1, a[3] = sw2;
            }
            else if(s == "east"){
                int sw1 = a[0], sw2 = a[1];
                a[0] = a[2], a[1] = a[3];
                a[3] = sw1, a[2] = sw2;
            }
        }
        cout << a[0] << endl;
    }
    return 0;
}
