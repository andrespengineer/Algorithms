// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
   
    int n;
    int petia, vasya, tonya;
    int sol = 0, temp;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> petia >> vasya >> tonya;
        temp = petia + vasya + tonya;
        
        if(temp > 1)
            sol++;
        
        if(i+1 == n)
            cout << sol << endl;
    }
}
