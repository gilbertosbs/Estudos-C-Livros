//programa que advinha  a soma de 5 numeros
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    cout << "\nDigite um numero de até 4 algoritmos:  ";
    int x,r;
    cin >> x;
    r = 19998 + x;
    cout <<"\nO resultado da soma é:" << r;
    cout <<"\nDigite o segundo número:";
    cin >> x;
    cout <<"\nO meu número é: " << (9999 - x);
    cout <<"\nDigite o 4 número: ";
    cin >> x;
    cout << "\nO meu número é :" << (9999-x) << endl;
    cin.get();

}
