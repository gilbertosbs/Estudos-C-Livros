//calculo media de notas entradas pelo usu�rio
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float soma = 0.0;
    const int max = 10;
    cout << setprecision(2);
    for (int i = 0; i < max; i++)
    {
        cout << "\nDigite a nota " << (i+1) << " : ";
        float nota;
        cin >> nota;
        soma += nota;
    }
    cout << "\nM�dia = " << (soma/max) << endl;
    cin.get();
}
