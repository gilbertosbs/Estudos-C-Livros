#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"portuguese");
    int num1;  //define num1 como inteiro
    num1 = 44;  //atribui valor a num1
    int num2;
    num2 = num1 + 50;

    cout << "\tNo primeiro é " << num1;
    cout << "\n\tNo segundo é " << "num1 + 50 = " << num2;
    cin.get();
}

