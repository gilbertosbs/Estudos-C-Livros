#include <iostream> //importando biblioteca
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese"); //definindo padr�o para caracteres acentuados
     float volume, comprimento, largura, altura; //defini��o das variaveis
     cout<< "\nDigite  o valor do comprimento: ";
     cin >> comprimento;
     cout <<"\nDigite o valor da largura: ";
     cin >> largura;
     cout <<"\nDigite o valor da altura: ";
     cin >> altura;
     volume = comprimento * largura * altura; //calculo volume
     cout << "\n O volume � : "<< volume << endl; //apresenta��o do volume
     cin.get();
}
