#include <iostream>
#include <fstream>
using namespace std;
int main () {
 ofstream arquivo; // ofstream - Arquivo apenas para sa�da de dados.
 arquivo.open ("BSItexto.txt"); // Abre o arquivo. Cria o arquivo caso ele n�o exista.
 arquivo << "Ivan" << endl; // Insere nomes no arquivo (operador "<<").
 arquivo << "Rebecka" << endl;
 arquivo.close(); // Fecha o arquivo.
 return 0;
}
