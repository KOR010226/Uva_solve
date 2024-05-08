#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int fin[41];
    fin[0] = 1, fin[1] = 1;
    
    for(int i = 2; i <= 40; i ++){
      fin[i] = fin[i - 1] + fin[i - 2];
    }
    
    int N;
    cin >> N;
    
    for(int i = 0 ;i < N; i ++){
      int use[41] = {-1};
      int x;
      cin >> x;
      
      bool first = false;
      
      int sum = 0;
      
      for(int j = 40 ; j > 0; j --){
        if(fin[j] <= x && (sum + fin[j]) <= x){
          sum += fin[j];
          use[j] = 1;
        }
        else if(first && fin[j] < x){
          use[j] = 0;
        }
        
        if(sum == x){break;}
      }
      
      bool f1 = false;
      
      cout << x << " = ";
      for(int j = 40; j > 0 ;j --){
        if(use[j] == 1) f1 = true;
        if(use[j] != -1 && f1) cout << use[j]; 
      }
      
      cout << " (fib) " << endl;
    }
    return 0;
}
