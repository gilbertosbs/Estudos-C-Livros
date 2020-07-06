#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale (LC_ALL, "Portuguese");
     int cont = 0; //contador
     cout << "\nEntre com caracteres: ";
     while (getche()  !=  '\r')    // enquanto não [enter]
                cont ++; //corpo do laço

     // fora do laço
     cout << "\nO número de caracteres é " << cont << endl;

     cin.get();
}
