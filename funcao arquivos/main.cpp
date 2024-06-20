#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main () {
 string linha;
 fstream arq; //fstream - leitura e escrita
 arq.open ("nomes.txt", ios::out | ios::app); //abre para escrita (ios::out)
 if (arq.is_open()) {
 //realiza uma escrita
 arq << "Maria Donizeti" << endl;
 arq << "Ivan Lopes" << endl;
 arq.close();

 arq.open("nomes.txt", ios::in); //abre no modo de leitura (ios::in)
 while (! arq.eof() ) {
 getline (arq, linha);
 cout << linha << endl;
 }
 arq.close();
 } else {
 cout << "ERRO: arquivo n�o foi aberto ou n�o existe" << endl;
 }
 return 0;
}
