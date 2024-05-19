#include <bits/stdc++.h>
using namespace std;
string s;
int q;

int main() 
{
    int t = 1;
    
    while(cin >> s){
      cout << "Case " << t << ":\n";
      cin >> q;
      
      for(int i = 0; i < q; i ++){
        int x, y;
        cin >> x >> y;
        bool ok = true;
        
        if(x == y){
          cout << "Yes\n";
          continue;
        }
        
        for(int j = min(x, y); j < max(x, y); j ++){
          if(s[j] != s[j + 1]){
            cout << "No\n";
            ok = false;
          }
          if(!ok) break;
        }
        if(ok) cout << "Yes\n";
      }
      t ++;
    }
    return 0;
}
