// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    int flag = 0;
    int flagDos = 0;
    
    cin >> s;
    t = s;
    
    int n = s.length();
    int c = n;
    
    while(n > 0)
    {
            if(s[n] == toupper(s[n]) && s[0] != toupper(s[0]))
                 n--;
            else break;
            
            if(n == 0)
            flag = 1;
    }
    n = c;
    while(n > 0)
    {
            if(s[n] == toupper(s[n]) && s[0] == toupper(s[0]))
                 n--;
            else break;
            
            if(n == 0)
            flagDos = 1;
    }
    n = c;
    
    if(flag == 1)
    while(n >= 0){
    
          if(n == 0)
              s[n] = toupper(s[n]);
          else
              s[n] = tolower(s[n]);
              
          n--;
    }
    else if(flagDos == 1)
    while(n >= 0)
    {
         s[n] = tolower(s[n]);
         n--;   
    }
    
    
        cout << s << "\n";
  
    
}
