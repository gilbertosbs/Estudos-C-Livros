
//imprimi o numero de 2 em 2 até 100
#include <iostream>
using namespace std;
int main(void)
{
    int i, j; // inicializando variavel
    for (i = 0, j = 0; (i+j) < 100; i++, j++)
        cout <<(i+j) << ' ';

    cout << endl;
    cin.get();
}
