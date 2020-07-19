//imprimi o dia da semana com base em uma data
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int dia, mes, ano;
     const char ESC = 27;
     do
     {
          cout << "Digite a data na forma  dd mm aaaa: ";
          cin >> dia, mes, ano;

          int dSemana = ano + dia + 3 *(mes - 1) - 1;
          if( mes < 3 )
               ano --;
          else
               dSemana -= int((ano/100 + 1) * 0.75);
          dSemana %= 7;

          switch(dSemana)
          {
          case 0:
               cout << "Domingo";
               break;
          case 1:
               cout << "Segunda";
               break;
          case 2:
               cout << "Terça";
               break;
          case 3:
               cout <<"Quarta";
               break;
          case 4:
               cout << "Quinta";
               break;
          case 5:
               cout << "Sexta";
               break;
          case 6:
               cout << "Sábado";
               break;
          }
          cout <<"\nESC para encerrar ou enter para recomeçar";
          cout << endl;
     } while (getch() != ESC);

     cin.get();
}
