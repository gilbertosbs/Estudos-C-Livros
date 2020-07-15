//quadradosemusarexponeciação
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
     int n, soma = 0;

     setlocale(LC_ALL, "Portuguese");
     cout << "Digite um numero: " << endl;
     cin >> n;
     cout << "\nO quadrado de " << n << " é " ;

     if(n < 0) n = -n;

     for(int i = 1; n > 0; n-- )
     {
          soma +=i;
          i += 2;
     }
     cout << soma << endl;

     cin.get();
}
