//centraliza MEU NOME GILBERTO APARECIDO PEREIRA dentro de uma moldura
#include <iostream>
#include <iomanip>
using namespace std;
void linha(int n); //prot�tipo
void espacos(int n); //prot�tipo
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     espacos(30);
     linha(30);
     cout << endl;
     espacos(30);
     cout << "* GILBERTO APARECIDO PEREIRA *" << endl;
     espacos(30);
     linha(30);
     cout << endl;
     cin.get();
     return 0;

}
//linha()
//Desenha uma linha na tela
void linha (int n)
{
     for( int i =0; i<n; i++) cout << '*';
}
//espacos()
//imprime espa�os em branco
void espacos( int n)
{
     for(int i=0;i<n; i++) cout << ' ';
}
