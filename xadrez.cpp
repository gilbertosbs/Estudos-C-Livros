#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
     system("cls"); //limpa a tela
     for(int lin = 1; lin <=8; lin++)
     {
          for (int col=1; col <=8; col++)
               if ((lin + col) % 2 == 0)
               cout << "\xdb\xdb";
               else
                    cout << "  ";
                    cout << "  ";
          cout << endl;
     }
     cin.get();
}
