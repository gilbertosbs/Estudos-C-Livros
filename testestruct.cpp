#include <iostream>
#include <iomanip>
using namespace std;
     struct Agenda {
          string nome;
          string  endereco;
          float cep;
          string bairro;
          int telefone;
};


int main()
{
     char dado;
     int i, j, k;
     char x;
     setlocale(LC_ALL, "Portuguese");

     //entrada do cadastro da agenda

          Agenda p1,p2, p3, p4; //defini��o da estrutura
          //defini��o dos dados do primeiro cliente
          p1.nome = "**Gilberto Pereira**";
          p1.endereco = "S�o Bento do sapuca�";
          p1.cep = 12490-000;
          p1.bairro = "Campo Monteiro";
          p1.telefone = 12996206551;
          cout << "\n\t" << p1.nome;
          cout <<"\n\t" << p1.endereco;
          cout <<"\n\t"<< p1.cep;
          cout << "\n\t" <<p1.bairro;
          cout << "\n\t" << "Phone: "<< p1.telefone;
          cout <<"\n" << setw(20);

          //defini��o dos dados do segundo cliente
           p2.nome = "**Josef� Da Silva**";
          p2.endereco = "S�o Paulo";
          p2.cep = 05451-070;
          p2.bairro = "Vila Madalena";
          p2.telefone = 12998304534;
          cout << "\n\t" << p2.nome;
          cout <<"\n\t" << p2.endereco;
          cout <<"\n\t"<< p2.cep;
          cout << "\n\t" <<p2.bairro;
          cout << "\n\t" <<"Phone: " << p2.telefone;
          cout <<"\n" << setw(20);

          //defini��o dos dados do terceiro cliente
           p3.nome = "**Heismer Sobeck**";
          p3.endereco = "S�o Paulo";
          p3.cep = 05452-020;
          p3.bairro = "Vila Madalena, Rua Atimba";
          p3.telefone = 1299746323;
          cout << "\n\t" << p3.nome;
          cout <<"\n\t" << p3.endereco;
          cout <<"\n\t"<< p3.cep;
          cout << "\n\t" <<p3.bairro;
          cout << "\n\t" << "Phone: " << p3.telefone;
          cout << "\n"<< setw(20);

          //defini��o dos dados do quarto cliente
          p4.nome = "**Eudora Coelho**";
          p4.endereco = "Bol�via";
          p4.cep = 102342;
          p4.bairro = "La Paz";
          p4.telefone = 12997636422;
          cout << "\n\t" << p4.nome;
          cout <<"\n\t" << p4.endereco;
          cout <<"\n\t"<< p4.cep;
          cout << "\n\t" <<p4.bairro;
          cout << "\n\t" << "Phone: "<<p4.telefone;
          cout << "\n"<< setw(20);

cin.get();
return 0;
}
