#include <iostream>
using namespace std;
int abs(int n); //protótipo
int main()
{
     int x =  -10;
     cout << abs(0) << '\t ' << abs(-3) << '\t' << abs(x) << endl;
     cin.get();
     return 0;
}
//abs
// calcula o valor absoluto de um numero
int abs( int n)
{
     return( n > 0 ) ? n : -n;
}
