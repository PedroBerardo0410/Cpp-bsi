#include <iostream>
#include <cstdlib>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int mo, mp, mb, soma;

    cout << "Digite o N�mero de medalhas de Ouro que o Brasil ganhou nas Olimp�adas: \n";
    cin >> mo;
    cout << "Digite o N�mero de medalhas de Prata que o Brasil ganhou nas Olimp�adas:  \n";
    cin >> mp;
    cout << "Digite o N�mero de  medalhas de Bronze que o Brasil ganhou nas Olimp�adas:  \n";
    cin >> mb;

    soma = mo + mp + mb;

    cout << "O Brasil ganhou " << soma << " medalhas nas Olimp�adas. \n";



    return 0;
}
