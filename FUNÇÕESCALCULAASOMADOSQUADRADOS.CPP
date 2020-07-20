#include <iostream>
#include <iomanip>
using namespace std;
//protótipos das 3 funções abaixo
float somasqr(float m, float n);//protótipo
float sqr(float z); //protótipo
float soma(float m, float n); //protótipo

int main()
{
     setlocale(LC_ALL, "Portuguese");
     float a,b;
     cout << "Digite dois números: ";
     cin >> a >> b;
     cout << "A soma dos quadrados é " << somasqr(a, b);
     cout << endl;
     cin.get();
     return 0;
}
//somasqr()
//Calcula a soma dos quadrados de dois números
float somasqr(float m, float n)
{
     return soma( sqr(m), sqr(n) );
}

//sqr()
//Calcula o quadrado de um número
float sqr(float z)
{
     return z*z;
}
//soma()
//Calcula a soma de dois números
float soma(float m, float n)
{
     return m+n;
}
