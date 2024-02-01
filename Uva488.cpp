#include <bits/stdc++.h>
using namespace std;
#define pb push_back
// Date : 2024/2/1

int main(){
    int n;
    cin >> n;

    while(n --){
        int x, y;// num to x
        cin >> x >> y;

        while(y --){
                // top
                for(int j = 1; j <= x - 1; j ++){
                    int idx = j;
                    for(int k = 1; k <= idx; k ++){
                        cout << idx;
                    }
                    cout << "\n";
                }

                // middle
                for(int j = 1; j <= x; j ++){
                    cout << x;
                }
                cout << "\n";

                // bottom
                for(int j = x - 1; j >= 1; j --){
                    int idx = j;
                    for(int k = idx; k >= 1; k --){
                        cout << idx;
                    }
                    cout << "\n";
                }
                cout << "\n";
            }

        cout << "\n";
    }
    return 0;
}
