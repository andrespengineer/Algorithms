// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 

#include <iostream>
using namespace std;

int main() {
    
    int b, h, a;
    cin >> b >> h >> a;
    
    long long k = h/a;
    long long p = b/a;
    
    if(h%a != 0)
        k++;
    
    if(b%a != 0)
        p++;
    
    cout << p*k;
   
}
