//programa que apresenta o resultado de opera��es matematicas entradas
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
    const int TRUE=1;

    while(TRUE)
        {
            float n1,n2;
            char op;

            cout << "\nDigite a senten�a que deseja realizar o c�lculo: ";
            cin >> n1 >> op >> n2;

            if( op == '+')
                cout << n1 + n2;
            else if( op == '-')
                cout  << n1 - n2;
            else if( op == '*')
                cout << n1 * n2;
            else if(op == '/')
                cout << n1 / n2;
            else cout << "Operador inv�lido! Digite outro operador entre as op��es: '+'ou '-' ou '/' ou '*' .";
        }
    cout << endl;
    cin.get();
}
