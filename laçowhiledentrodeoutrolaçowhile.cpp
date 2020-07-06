#include <iostream>
#include <conio.h> //stdlib.h em c
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
      int i, n, r, a, c;
      i = 1;
      while( i <= 5 )
         {
          cout << "\nInsira um valor para N: " << endl;
          cin >> n;
          r = n * 3;
          cout << " O valor de R: " << r ;
          i ++;
          cin.get();
         }
        while(i <= 2 )
          {
               cout << "\nInsira um valor para A:" << endl;
               cin >> a;
               c = a *2;
               cout << " O valor de C: " << c << endl;
               i ++;
          }
     cin.get();
}

