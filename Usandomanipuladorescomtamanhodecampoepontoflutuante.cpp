#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float lapis = 4.875, borrachas = 234.542, canetas = 42.036, cadernos = 8.0, fitas = 13.05;
    cout <<"\n\n\n";
    cout << setiosflags(ios::fixed) //ponto decimal
    << setiosflags(ios::showpoint) //sempreimprimir o decimal ponto
    << setprecision(2); //duas casas decimais
    cout << '\n'<<"\tlápis          "<< setw(12)<< lapis; //campo do tamanho 12
    cout << '\n'<<"\tBorrachas      "<< setw(12)<< borrachas;
    cout << '\n'<<"\tCanetas        "<< setw(12)<< canetas;
    cout << '\n'<<"\tCadernos       "<< setw(12)<< cadernos;
    cout << '\n'<<"\tFitas          "<< setw(12)<< fitas;
    cout << endl;
    cin.get();
    return 0;
}
