//programa que retorna os hor�rios de onibus de s�o bento do sapuca�
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     cout << "\n\t.........MENU.......";
     cout <<"\n\t1 - Campos Do Jord�o";
     cout <<"\n\t2 - Sapuca� Mirim";
     cout <<"\n\t3 - Santo Ant�nio Do Pinhal";
     cout <<"\n\t4 - Trememb�";
     cout <<"\n\t5 - Pindamonhangaba";
     cout <<"\n\t6 - Parais�polis";
     cout <<"\n\t7 - Bras�polis";
     cout <<"\n\t8 - Itajub�";
     cout<<"\n\t....................";
     int n;
     cout<<"\n" << "\nDigite um n�mero para uma cidade: ";
     cin >> n;
    float passaromarromhora = 8.00, gardeniahora = 14.45, gardeniahora2 = 20.05;
    if (n == 1)
        cout << "\tA empresa � o P�ssaro Marrom, o Destino desejado � Campos do jord�o " << "\n\tO hor�rio de partida neste per�odo de quarentena �: " << "\n\tDE SEGUNDA � S�BADO �S " << passaromarromhora <<"A.M."<< "\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n == 2)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Sapuca� Mirim " << "\n\tO hor�rio de partida neste per�odo de quarentena �:  " << "\n\tTODOS OS DIAS �S " << gardeniahora <<"P.M."<< "\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n == 3)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Santo Antonio Do Pinhal " << "\n\tO hor�rio de partida neste per�odo de quarentena �:  " << "\n\tTODOS OS DIAS �S " << gardeniahora <<" P.M." "\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n == 4)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Trememb� " << "\n\tO hor�rio de partida neste per�odo de quarentena �: "<< "\n\tTODOS OS DIAS �S " <<gardeniahora <<" P.M. "<<"\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n == 5)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Pindamonhangaba " << "\n\tO hor�rio de partida neste per�odo de quarentena � :"  << "\n\tTODOS OS DIAS �S " << gardeniahora <<" P.M." <<"\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n == 6)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Parais�polis " << "\n\tO hor�rio de partida neste per�odo de quarentena �: "  << "\n\tTODOS OS DIAS �S " << gardeniahora2 <<" P.M."<<"\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n == 7)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Bras�polis " << "\n\tO hor�rio de partida neste per�odo de quarentena �:  " << "\n\tTODOS OS DIAS �S " << gardeniahora2 <<" P.M. "<<"\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else if(n ==8)
        cout << "\tA empresa � o Expresso Gard�nia, o Destino desejado � Itajub� " << "\n\tO hor�rio de partida neste per�odo de quarentena �: "  << "\n\tTODOS OS DIAS �S " << gardeniahora2 <<" P.M." <<"\n\tN�o se esque�a do uso obrigat�rio da m�scara e se poss�vel levar �lcool gel, tenha uma boa viagem! ";
    else
        cout << "\n C�digo Inv�lido!";
    cin.get();
}
