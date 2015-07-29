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
    int groups;
    int cnt4 = 0, cnt3 = 0, cnt2 = 0, cnt = 0;
    int finCount = 0;
    
    cin >> n;
    
    
    for(int i = 0; i < n; i++)
    {
        cin >> groups;
        
        if(groups == 4)
            cnt4++;
        else if(groups == 3)
            cnt3++;
        else if(groups == 2)
            cnt2++;
        else
            cnt++;
    }
    
    finCount = finCount + cnt4;
    finCount = finCount + cnt3;
    
    if(cnt >= cnt3)
        cnt = cnt - cnt3;
    else
        cnt = 0;
    
    if((cnt2*2)%4 == 0){
        
        finCount = finCount + (cnt2*2) / 4;
        cnt2 = 0;
    }
    else{
        
        finCount = finCount + (cnt2*2) / 4;
        cnt2 = 1;
    }
        
        cnt = cnt + cnt2*2;
        
        if(cnt%4 == 0)
            cnt = cnt/4;
        else if(cnt%4 != 0)
            cnt = cnt/4 + 1;
        else if(cnt < 4 && cnt > 0)
            cnt = 1;
        
    finCount = finCount + cnt;
        
    
    cout << finCount << endl;

}
