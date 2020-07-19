// programa chama uma função para converter fahrenheit em celsius
#include <iostream>
#include <iomanip>
int celsius (int fahr);
using namespace std;
int main()
{
     int c, f;
     cout << "Digite a temperatura em graus Fahrenheit: ";
     cin >> f;

     c = celsius(f); //chamada à função

     cout << "Celsius = " << c << endl;

     cin.get();

}
//celsius ()
// definição da função
int celsius( int fahr)
{
     int c;
     c = (fahr - 32) * 5/9;
     return c;
}
