// 病嬌模擬器的作者做這題會很快

#include <bits/stdc++.h>
using namespace std;
#define y ==
#define c cout << 

int main() 
{
    string s;
    
    while(getline(cin, s)){
      for(int i = 0 ;i < s.size(); i ++){
        if(s[i]=='2')c '`';
        if(s[i]=='3')c '1';
        if(s[i]=='4')c '2';
        if(s[i]=='5')c '3';
        if(s[i]=='6')c '4';
        if(s[i]=='7')c '5';
        if(s[i]=='8')c '6';
        if(s[i]=='9')c '7';
        if(s[i]=='0')c '8';
        if(s[i]=='-')c '9';
        if(s[i]=='=')c '0';
        
        if(s[i]=='e')c 'q';
        if(s[i]=='d')c 'a';
        if(s[i]=='c')c 'z';
        if(s[i]=='r')c 'w';
        if(s[i]=='f')c 's';
        if(s[i]=='v')c 'x';
        if(s[i]=='t')c 'e';
        if(s[i]=='g')c 'd';
        if(s[i]=='b')c 'c';
        if(s[i]=='y')c 'r';
        if(s[i]=='h')c 'f';
        if(s[i]=='n')c 'v';
        if(s[i]=='u')c 't';
        if(s[i]=='j')c 'g';
        if(s[i]=='m')c 'b';
        if(s[i]=='i')c 'y';
        if(s[i]=='k')c 'h';
        if(s[i]==',')c 'n';
        if(s[i]=='o')c 'u';
        if(s[i]=='l')c 'j';
        if(s[i]=='.')c 'm';
        if(s[i]=='p')c 'i';
        if(s[i]==';')c 'k';
        if(s[i]=='/')c ',';
        if(s[i]=='\\')c '[';
        
        if(s[i]=='[')c 'o';
        if(s[i]=='\'')c 'l';
        if(s[i]==']')c 'p';
        
        if(s[i] == ' ')c ' '; 
      }
      
      c endl;
    }
    return 0;
}
