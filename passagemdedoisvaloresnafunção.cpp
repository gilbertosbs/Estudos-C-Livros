#include <iostream>
#include <iomanip>
using namespace std;
void retangulo( int largura, int altura); //protótipo
int main()
{
     cout << "Sala" << endl;
     retangulo(22,12);
     cout << "Cozinha" << endl;
     retangulo(16,16);
     cout << "Banheiro" << endl;
     retangulo(6,8);
     cout << "Quarto" << endl;
     retangulo(12,12);
     cout << endl;
     cin.get();
     return 0;
}
//retangulo ()
//Desenha um retângulo na tela
void retangulo( int largura, int altura)
{
     largura /=2;
     altura /=4;
     for (int j= 1; j<= altura; j++)
     {

          cout << "\t\t";
          for( int k=1; k <= largura; k++) cout << '\xDB';
          cout << endl;
     }
}
