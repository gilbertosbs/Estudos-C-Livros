//cria um jogo para cara ou coroa.
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(void)
{
     int n, perda =0, ganho =0;
     setlocale(LC_ALL, "Portuguese");

     cout << "Quantas vezes você quer jogar ? ";
     cin >> n;

     for (int i=0; i < n; i++)
     {
          int resp;
          cout << "Escolha: 0 = Cara e 1 = Coroa: ";
          cin >> resp;
          while (resp != 0 && resp != 1)
          {
               cout << "Erro: entre 0 para Cara ou 1 para Coroa";
               cin >> resp;
          }
          if ((rand()%2) ==resp)
          {
               ganho ++;
               if(resp ==0)
                    cout << "Cara, você ganhou." << endl;
               else
                    cout << "Coroa, você ganhou." << endl;
          }
          else
          {
               perda ++;
               if(resp ==1)
                    cout << "Cara, você perdeu. " << endl;
               else
                    cout << "Coroa, você perdeu. " << endl;
          }
     }
     cout << "\n\nRelatório Final : ";
     cout << "\nNo. de jogos você ganhou: " << ganho;
     cout << "\nNo. de jogos que você perdeu: " << perda << endl;

     cin.get();
}
