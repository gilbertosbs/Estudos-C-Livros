#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale (LC_ALL, "Portuguese");
     int cont = 0; //contador
     cout << "\nEntre com caracteres: ";
     while (getche()  !=  '\r')    // enquanto n�o [enter]
                cont ++; //corpo do la�o

     // fora do la�o
     cout << "\nO n�mero de caracteres � " << cont << endl;

     cin.get();
}
