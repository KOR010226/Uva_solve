#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long S, D;
    
    while(cin >> S >> D){
        long long sum[10001];
        sum[0] = 0;
        long long cnt = 0;
        
        for(long long i = S; ; i ++){
          cnt += i;
          if(cnt >= D){
            cout << i << endl;
            break;
          }
        } 
    }
    return 0;
}
