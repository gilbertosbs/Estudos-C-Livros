#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     int celsius(int fahr);//protótipo local

     int c, f;
     cout <<"Digite a temperatura em graus Fahrenheit: ";
     cin >> f;

     c = celsius(f); //chamada à função

     cout << "Celsius = " << c << endl;

     cin.get();
   return 0;
}

//definição celsius()
//definição da função
int celsius(int fahr)
{
     int c;
     c = (fahr - 32) * 5/9;
     return c;

}
