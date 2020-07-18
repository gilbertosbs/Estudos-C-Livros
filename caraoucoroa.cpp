#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(void)
{
     int n, perda =0, ganho =0;
     setlocale(LC_ALL, "Portuguese");

     cout << "Quantas vezes voc� quer jogar ? ";
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
                    cout << "Cara, voc� ganhou." << endl;
               else
                    cout << "Coroa, voc� ganhou." << endl;
          }
          else
          {
               perda ++;
               if(resp ==1)
                    cout << "Cara, voc� perdeu. " << endl;
               else
                    cout << "Coroa, voc� perdeu. " << endl;
          }
     }
     cout << "\n\nRelat�rio Final : ";
     cout << "\nNo. de jogos voc� ganhou: " << ganho;
     cout << "\nNo. de jogos que voc� perdeu: " << perda << endl;

     cin.get();
}
