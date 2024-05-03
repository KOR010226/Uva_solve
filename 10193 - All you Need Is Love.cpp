#include <bits/stdc++.h>
using namespace std;
#define len size()

long long gcd(int a, int b){
  if(a % b == 0) return b;
  return gcd(b, a % b);
}

int main() 
{
    int N;
    cin >> N;
    
    int pair = 0;
    
    while(N --){
      string s1, s2;
      cin >> s1 >> s2;
      
      long long sum1 = 0, sum2 = 0;
      
      for(int i = s1.len - 1, j = 0; i >= 0 ;i --, j ++){
        if(s1[i] == '1') sum1 += pow(2, j);
      }
      for(int i = s2.len - 1, j = 0; i >= 0; i --, j ++){
        if(s2[i] == '1') sum2 += pow(2, j);
      }
      
      cout << "Pair #" << pair + 1 << ": ";
      pair += 1;
      
      if(gcd(sum1, sum2) > 1){
          cout << "All you need is love!\n";      
      }      
      else cout << "Love is not all you need!\n";
    }
    return 0;
}
