//inicializando variaveis
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int evento = 5;
    char corrida = 'c';
    float tempo = 27.25;
    cout <<"\nO tempo vitorioso na eliminat�ria " << corrida <<" da competi��o " << evento <<" foi"<<':'<<"\n" << tempo<< "\n"<< endl;
    cin.get();
    return 0;
}


