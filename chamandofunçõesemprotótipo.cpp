#include <iostream>
#include <iomanip>
using namespace std;
//celsius()
// defini��o da fun��o
int celsius( int fahr)
{
     int c;
     c = (fahr - 32) * 5/9;
     return c;
}
int main()
{
     int celsius(int fahr); //prot�tipo local

     int c, f;
     cout << "Digite a temperatura em Fahrenheit: ";
     cin >> f;

     c = celsius(f);   //chamada � fun��o

     cout << "Celsius = " << c << endl;

     cin.get();
     return 0;
}
