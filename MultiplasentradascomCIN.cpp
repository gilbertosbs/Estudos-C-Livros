#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    cout <<"\nDigite as notas de 4 provas:";
    float p1,p2,p3,p4;
    cin >> p1 >> p2 >> p3 >> p4;
    float media = (p1+p2+p3+p4)/4.0;
    cout << "\nMédia: " << media << endl;
    cin.get();
}
