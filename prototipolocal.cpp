#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     int celsius(int fahr);//prot�tipo local

     int c, f;
     cout <<"Digite a temperatura em graus Fahrenheit: ";
     cin >> f;

     c = celsius(f); //chamada � fun��o

     cout << "Celsius = " << c << endl;

     cin.get();
   return 0;
}

//defini��o celsius()
//defini��o da fun��o
int celsius(int fahr)
{
     int c;
     c = (fahr - 32) * 5/9;
     return c;

}
