#include <iostream>
#include <iomanip>
int celsius (int fahr);
using namespace std;
int main()
{
     int c, f;
     cout << "Digite a temperatura em graus Fahrenheit: ";
     cin >> f;

     c = celsius(f); //chamada � fun��o

     cout << "Celsius = " << c << endl;

     cin.get();

}
//celsius ()
// defini��o da fun��o
int celsius( int fahr)
{
     int c;
     c = (fahr - 32) * 5/9;
     return c;
}
