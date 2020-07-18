#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
     for( int lin=1; lin < 25; lin++)
     {
          for (int col = 1; col < 25; col ++)
               if(lin == col)
                    cout << '\xDB';
               else
                    cout << '\xB0';
          cout << endl;
     }
cin.get();
}
