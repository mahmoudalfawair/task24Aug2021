#include <iostream>
using namespace std;
 int num1=3;
       int num2=1;
int main()
{
    int num =5;
for(int i = 0; i< num; i++)
{
    for(int j = num -i; j>0; j--)
    cout << " ";
    for(int m =0; m< 12; m++ )
 {  
        /* 
            i == 0 && m == 0                  int num1 = 2;   
            i == 1 && (m == 0 && m == 2 )     m == num1          num1 = num1 +2;
            i == 2 && (m == 0 && m == 4 )    
            .
            .
            .
        */
      
       if(m == 0 && i == 0)
       cout << "*";
       if((m == 0 || m == num1)&&(i == 1) ) 
       cout << "*";
       else
       cout << " ";
 }      
 num1++;
 num2++;
    cout << endl;
}


}