//programa que retorna os horários de onibus de são bento do sapucaí
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     cout << "\n\t.........MENU.......";
     cout <<"\n\t1 - Campos Do Jordão";
     cout <<"\n\t2 - Sapucaí Mirim";
     cout <<"\n\t3 - Santo Antônio Do Pinhal";
     cout <<"\n\t4 - Tremembé";
     cout <<"\n\t5 - Pindamonhangaba";
     cout <<"\n\t6 - Paraisópolis";
     cout <<"\n\t7 - Brasópolis";
     cout <<"\n\t8 - Itajubá";
     cout<<"\n\t....................";
     int n;
     cout<<"\n" << "\nDigite um número para uma cidade: ";
     cin >> n;
    float passaromarromhora = 8.00, gardeniahora = 14.45, gardeniahora2 = 20.05;
    if (n == 1)
        cout << "\tA empresa é o Pássaro Marrom, o Destino desejado é Campos do jordão " << "\n\tO horário de partida neste período de quarentena é: " << "\n\tDE SEGUNDA À SÁBADO ÀS " << passaromarromhora <<"A.M."<< "\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n == 2)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Sapucaí Mirim " << "\n\tO horário de partida neste período de quarentena é:  " << "\n\tTODOS OS DIAS ÀS " << gardeniahora <<"P.M."<< "\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n == 3)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Santo Antonio Do Pinhal " << "\n\tO horário de partida neste período de quarentena é:  " << "\n\tTODOS OS DIAS ÀS " << gardeniahora <<" P.M." "\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n == 4)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Tremembé " << "\n\tO horário de partida neste período de quarentena é: "<< "\n\tTODOS OS DIAS ÀS " <<gardeniahora <<" P.M. "<<"\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n == 5)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Pindamonhangaba " << "\n\tO horário de partida neste período de quarentena é :"  << "\n\tTODOS OS DIAS ÀS " << gardeniahora <<" P.M." <<"\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n == 6)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Paraisópolis " << "\n\tO horário de partida neste período de quarentena é: "  << "\n\tTODOS OS DIAS ÀS " << gardeniahora2 <<" P.M."<<"\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n == 7)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Brasópolis " << "\n\tO horário de partida neste período de quarentena é:  " << "\n\tTODOS OS DIAS ÀS " << gardeniahora2 <<" P.M. "<<"\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else if(n ==8)
        cout << "\tA empresa é o Expresso Gardênia, o Destino desejado é Itajubá " << "\n\tO horário de partida neste período de quarentena é: "  << "\n\tTODOS OS DIAS ÀS " << gardeniahora2 <<" P.M." <<"\n\tNão se esqueça do uso obrigatório da máscara e se possível levar álcool gel, tenha uma boa viagem! ";
    else
        cout << "\n Código Inválido!";
    cin.get();
}
