#include <iostream>
#include <locale>
#include <cctype>
#include <iomanip>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    char sexo;
    float peso, hi, h;

    cout << "Digite - M - para masculino. \n";
    cout << "Digite - F - para feminino. \n";
    cin >> sexo;
    sexo = toupper(sexo);
    cout << "Informe sua altura em centimetros: \n";
    cin >> hi;
    h = hi / 100;

    switch (sexo){
case 'M':
    peso = (72.7 * h) -58;
    cout << "O peso ideal �: " << peso << "\n";
    break;
case 'F':
    peso = (62.1 * h) -44.7;
    cout << "O peso ideal �: " << peso << "\n";
    break;
default:
    cout << "Op��o Inv�lida.";
    }
}
����return�0;
}
