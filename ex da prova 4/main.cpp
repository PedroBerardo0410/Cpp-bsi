#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int opcao, N, i;

    cout << "Quantos produtos voc� vai lan�ar? ";
    cin >> N;
    fflush(stdin);

    struct EstruturaProduto{
        char produto[60];
        float preco;
        float total;
        } strProduto[N];

    for (i = 0; i<N; i++) {
    cout << endl;
    cout << "Qual � o produto? ";
    fflush(stdin);
    cin.getline(strProduto[i].produto,60);
    fflush(stdin);
    cout << endl << "Qual o valor do produto? ";
    cin >> strProduto[i].preco;
    fflush(stdin);
    cout << endl << "De acordo com o menu abaixo, informe como deseja pagar: " << endl;
    cout << "1 - pagamento � vista (10% desconto). " << endl;
    cout << "2 - pagamento com 30 dias de prazo (sem desconto). " << endl;
    cout << "3 - pagamento em 10X (Cart�o de cr�dito - sem desconto - sem acr�scimo). " << endl;
    cout << "4 - pagamento em 10X (Boleto - 10% acr�scimo). " << endl;
    cin >> opcao;

    switch(opcao){
        case 1:
            strProduto[i].total = strProduto[i].preco * 0.9;
            cout << "O valor do produto com desconto �: " << strProduto[i].total << ".";
        break;
        case 2:
            cout << "O valor do produto para pagamento com 30 dias �: " << strProduto[i].preco << ".";
        break;
        case 3:
        cout << "O valor do produto em 10X no cart�o �: " << strProduto[i].preco << "." << endl;
        cout << "Cada parcela ficar�: " << (strProduto[i].preco /10);
        break;
        case 4:
            strProduto[i].total = strProduto[i].preco * 1.1;
            cout << "O valor do produto em 10X no boleto �: " << strProduto[i].total << "." << endl;
            cout << "Cada parcela ficar�: " << (strProduto[i].total /10);
        break;
        default:
            cout << endl << "Op��o Inv�lida!!! \n";
        break;
    }
    }


    return 0;
}
