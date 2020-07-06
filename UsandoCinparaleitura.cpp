#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    cout << "\nDigite o seu nome:";
    char primeironome[61];
    cin >> primeironome;
    cout << "\nO nome digitado foi: " << primeironome << endl;
    char sobrenome[61];
    cout << "\nInforme seu sobrenome: ";
    cin>> sobrenome;

    cout << "\nO sobrenome é:" << sobrenome << endl;
}
