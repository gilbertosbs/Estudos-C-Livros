//contazerosmodificados
#include <iostream>
#include <iomanip>
#include <conio.h> //para getche()

using namespace std;
int main(void)
{
    char ch;
    int cont = 0;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite uma frase: " << endl;

    while ( (ch = getche()) != '\ r')
    {
            if (ch == '0')
                {
                    cout << "\nZero detectado " << endl;
                    cont ++;
                }
            if(cont > 0)
                    cout << "Voc� digitou " << cont << "zeros ." << endl;
            else
                    cout <<" Voc� n�o digitou nenhum zero. " << endl;
    }
    cin.get();
}
