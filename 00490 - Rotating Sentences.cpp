#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() 
{
    string s;
    vector<string> v;
    char ans[101][101];
    int t = 0;
    
    for(int i = 0 ;i < 101; i ++){
      for(int j = 0 ;j < 101; j ++){
        ans[i][j] = ' ';
      }
    }
    int m = -1;
    
    while(getline(cin, s)){
      m = max(int(s.size()), m);
      for(int i = 0 ;i < s.size() ;i ++){
        ans[i][t] = s[i];
      }
      t++;
    }
    for(int i = 0 ;i < m; i ++){
      for(int j = t - 1;j >= 0; j --){
        cout << ans[i][j];
      }
      printf("\n");
    }
    
    return 0;
}
