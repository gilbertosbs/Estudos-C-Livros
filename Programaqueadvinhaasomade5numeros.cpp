//programa que advinha  a soma de 5 numeros
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    cout << "\nDigite um numero de at� 4 algoritmos:  ";
    int x,r;
    cin >> x;
    r = 19998 + x;
    cout <<"\nO resultado da soma �:" << r;
    cout <<"\nDigite o segundo n�mero:";
    cin >> x;
    cout <<"\nO meu n�mero �: " << (9999 - x);
    cout <<"\nDigite o 4 n�mero: ";
    cin >> x;
    cout << "\nO meu n�mero � :" << (9999-x) << endl;
    cin.get();

}
