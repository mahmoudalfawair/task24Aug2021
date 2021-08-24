#include <iostream>
using namespace std;
int main()
{
int num = 5;
for(int i =1; i <= num; i++)
{
    for(int j= num - i; j >= 0; j--)
    cout << " ";
    for(int m = 1; m <= i; m++ )
    {
        if(i == 3 && m == 3)
        cout << "\b\b  ";
        else if(i == 4 && (m ==3 || m == 4 ))
        cout << "\b\b  ";
        cout << "* ";
    }
    cout << endl;
}


return 24;
}