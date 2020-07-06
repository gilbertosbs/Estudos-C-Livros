//calculo media de 4 notas
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float nota, media = 0.0;

    cout << "\nDigite a primeira nota: ";
    cin >> nota;
    media += nota;

    cout <<"\nDigite a segunda nota: ";
    cin >> nota;
    media += nota;

    cout << "\nDigite a terceira nota: ";
    cin >> nota;
    media += nota;

    cout << "\nDigite a quarta nota: ";
    cin >> nota;
    media += nota;

    media /= 4.0;
    cout <<"\nMédia: " << media << endl;
    cin.get();

}
