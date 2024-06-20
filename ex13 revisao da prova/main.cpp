#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

float imc(float peso, int altura){
    float resultado;
    resultado = peso / altura;
    return resultado;

}

int main()
{
    fstream arq;
    arq.open("IMC.txt", ios::out | ios::app);
    setlocale(LC_ALL, "Portuguese");
    int cc;

    if (arq.is_open()){
    cout << "O programa a seguir calcula o IMC da pessoa." << endl;

    cout << "Quantos clientes voc� deseja cadastrar? ";
    cin >> cc;
    arq << "O programa a seguir calcula o IMC da pessoa." << endl;

    arq << "Quantos clientes voc� deseja cadastrar? ";
    }



    struct IMC{
        char nome[60];
        float peso;
        int altura;

    }strImc[cc];

    for (int i =0;i<cc;i++){
            cout << "\nInforme o nome do cliente: ";
            cin >> strImc[i].nome;
            cout << "Informe o peso do cliente: ";
            cin >> strImc[i].peso;
            cout << "Informe a altura do cliente: ";
            cin >> strImc[i].altura;
            cout << "O IMC � : " << imc(strImc[i].peso, strImc[i].altura) << endl;
            fflush(stdin);
    }
    if (arq.is_open()){
        for (int i =0;i<cc;i++){
            arq << "\nO IMC do cliente " << strImc[i].nome << " �: " << imc(strImc[i].peso, strImc[i].altura) << endl;
        }
    arq.close();
    }else{
         arq << "ERRO: arquivo n�o foi aberto ou n�o existe" << "\n";
    }

    return 0;
}
