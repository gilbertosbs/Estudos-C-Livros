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
    cout <<"\nO tempo vitorioso na eliminatória " << corrida <<" da competição " << evento <<" foi"<<':'<<"\n" << tempo<< "\n"<< endl;
    cin.get();
    return 0;
}


