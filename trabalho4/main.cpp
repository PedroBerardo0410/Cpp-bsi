#include <iostream>
#include <locale>
#include <cctype>
#include <iomanip>
using namespace std;
//14.	A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:
//�	m�dia do sal�rio da popula��o;
//�	m�dia do n�mero de filhos;
//�	maior sal�rio; .

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, filhos, somas = 0, somaf = 0;
    float  salario,medias, mediaf;
    double maiorsal = 0;

    for ( i = 0; i < 2; i++){
        cout << "Informe seu sal�rio: \n";
        cin >> salario;
        cout << "Informe a quantidade de filhos: \n";
        cin >> filhos;

        somas+= salario;
        somaf+= filhos;

        if (salario > maiorsal){
            maiorsal = salario;
        }


    }

    medias = somas / 2;

    mediaf = somaf / 2;

    cout << "A m�dia salarial � de: " << medias << "\n";
    cout << "A m�dia de filhos � de: " << mediaf << "\n";
    cout << "O maior sal�rio � de: " << maiorsal << "\n";


    return 0;
}
