// 用迴文判斷是否為對稱矩陣

#include <bits/stdc++.h>
using namespace std;
#define G 305
int main() 
{
    int T;
    cin >> T;
    int test = 1;
    
    while(T --){
      char N, equal;
      cin >> N >> equal;
      int n;
      cin >> n;
      int negative = 0;
      
      long long g[G*G];
      vector<long long > v1;
      
      for(int i = 1; i <= n * n ;i ++){
        cin >> g[i];
        v1.push_back(g[i]);
        if(g[i] < 0) negative ++;
      }
      
      bool ok = true;
      
      if(negative > 0){
        ok = false;
      }
      else{
        vector<long long> v2 = v1;
        reverse(v2.begin(), v2.end());
        if(v1 != v2){
          ok = false;
        }
      }
      
      cout << "Test #" << test << ": ";
      
      if(!ok) cout << "Non-symmetric.\n";
      else cout << "Symmetric.\n";
      
      test += 1;
    }
    return 0;
}
