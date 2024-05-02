#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int T;
   cin >> T;
   
   while(T --){
     int a[4000] = {0};
     int N, P;
     
     cin >> N >> P;
     
     for(int i = 0 ;i < P; i ++){
       int hi;
       cin >> hi;
       
       for(int h = hi; h <= N; h += hi){
         a[h] += 1;
       }
     }
     
     int lost = 0;
     
     for(int i = 1; i <= N; i ++){
       if((i % 7) == 6 || !(i % 7)){
         continue;
       }
       else if(a[i] > 0){
         lost += 1;
       }
     }
     cout << lost << endl;
   }
   return 0;
}
