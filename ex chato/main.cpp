#include <iostream>
#include <cstring>
#include <cstdlib>
#include <locale>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opc, sn, ec;
    int tj, tf, tff, rc, tc, le, ro, rl, cc;


do {
        cout << "\nEae, vamos nos comunicar? (s ou n)\n";
        cin >> opc;
        opc = toupper(opc);

        if (opc != 'S') {
            cout << "\nVoc� n�o tem escolha, vai conversar comigo sim! \n";
        }

    } while (opc != 'S');

        cout << "\nOK, vamos come�ar... \n";




        cout << "\nVoc� joga algum jogo online? (s ou n) \n";
        cin >> sn;

if (sn == 's'){
        cout << "\nQual tipo de jogo? \n";
        cout << "1 - para RPG;\n";
        cout << "2 - para FPS;\n";
        cout << "3 - para autochess;\n";
        cout << "4 - para outro;\n";
        cin >> tj;

        cout << "\nAinda bem que voc� joga algum jogo, estava achando voc� depressivo e sem rumo... \n";

}else {
        cout << "\nO que voc� faz da vida entao meu caro, vai ca�ar jeito de jogar qualquer jogo, e voc� ser� muito mais feliz. \n";

        }
        cout << "\nVoc� gosta de futebol? (1 - para sim e 2 - para nao) \n";
        cin >> tf;

if ( tf == 1 ){
            cout << "\nQual time voc� torce? \n";
            cout << "**************************** \n";
            cout << "1 para S�o Paulo;\n";
            cout << "2 para Palmeiras;\n";
            cout << "3 para Santos;\n";
            cout << "4 para Flamengo;\n";
            cout << "5 para outro time;\n";
            cout << "� not�rio que os time est�o em ordem de maioridade. \n";
            cin >> tff;

switch (tff){
            case 1:
                cout << "S�o Paulo, time bom, campe�o de tudo, nao tem o que falar mal.\n";
                break;
            case 2:
                cout << "Palmeiras, melhor time da atualidade, ganhou tudo v�rias vezes, e infelizmente falta apenas o mundial :c, por�m maior campe�o nacional. \n";
                break;
            case 3:
                cout << "Santos, time falido, joga serie B, time repleto de 3 eras, era do Pel�, era do Neymar, e do j� era. \n";
                break;
            case 4:
                cout << "Flamengo, time criado em 2019, costuma sempre ficar no cheirinho para o grande Palmeiras. \n ";
                break;
            case 5:
                cout << "Provavelmente seu time � min�sculo, sinto muito por voc� n�o torcer pro palmeiras.\n ";
                break;
            default:
                cout << "Cara � t�o  que consegue errar o n�mero que eu pedi.\n";
                break;
}
} else{
            cout << "\n� uma pena n�o assistir o Endrick jogar... \n";
}

            cout << "\nNo momento, voc� est� em algum compromisso? (namorando, ficando, casado) se sua resposta for sim digite 1, caso sua resposta seja n�o digite 2. \n";
            cin >> rc;

if (rc == 1){
            cout << "\nMas voc� est� em que tipo de compromisso?\n";
            cout << "\n1 - para namorando;\n";
            cout << "\n2 - para ficando;\n";
            cout << "\n3 - para casado;\n";
            cout << "\n4 - para outro;\n";
            cin >> tc;

    switch(tc){
    case 1:
        cout << "\nDa para notar que voc� � uma pessoa s�ria e que gosta do seu compromisso.\n";
        break;
    case 2:
        cout << "\nFicando? s�rio? tinha que ser um aquariano nato mesmo...\n";
    case 3:
        cout << "\nCasado j�? voc� deve ter uma idade elevada, mas parab�ns por conquistar algo assim.\n";
        break;
    case 4:
        cout << "\nExiste outro tipo de compromisso? kkkkkkkkkkk\n";
        break;
    default:
        cout << "\nERA PARA DIGITAR ALGUM N�MERO ENTRE 1 E 4 MAS ISSO � MUITO PARA VOC�.\n";
    }
} else{
        cout << "\nCurtindo a vida de solteiro, 'EU TENTEIII'\n";
}

        cout << "\nVoc� sabe falar ingl�s ?(1 - para sim, e 2 - para n�o)\n";
        cin >> le;

if (le == 1){
        cout << "\nParab�ns, voc� est� � alguns passos na frente dos outros, ingl�s � algo muito importante para seu emprego.\n";
}else {
        cout << "\nBusque aprender o Ingl�s nem que seja o b�sico, isto faz falta em uma entrevista de emprego.\n";
}
        cout << "\nVamos jogar um jogo agora...\n";
        cout << "\nSim, voc� n�o tem op��o de escolha.\n";
        cout << "\nSe voc� pudesse girar um roleta que tenha 75% de chance de voc� virar milion�rio, e 25% de chance de voc� morrer, voc� giraria?\n";
        cout << "1 - sim;\n";
        cout << "2 - n�o;\n";
        cin >> ro;

if(ro == 1){
        cout << "\nQue isso, que ser ousado voc� �, ent�o sua vida vale nada n�? Para voc� 'apostar' ela.\n";
}else {
        cout << "\nParab�ns, voc� sabe valorizar a sua vida.";
}
        cout << "\nCerca de 54% de pessoas aceitariam girar est� roleta.\n";


        cout << "\nVamos mais uma...\n";
        cout << "\nVoc� prefere ser inteligente e azarado ou burro e realmente sortudo? \n";
        cout << "1 - intelig�ncia e azar;\n";
        cout << "2 - burro e sortudo;\n";
        cin >> rl;

if (rl == 1){
        cout << "\nVoc� presa pela intelig�ncia, boa escolha.\n";
}else {
        cout << "\nCuidado a intelig�ncia n�o muda ela � para sempre, j� a sorte muda.\n";
}
        cout << "\nCerca de 72% das pessoas escolhem a intelig�ncia.\n";

        cout << "\nVamos para o �ltimo joguinho\n";
do{
        cout << "\nDe 0 a 10 quanto voc� gosta de chocolate?\n";
        cin >> cc;
if (cc < 0 || cc > 10){
        cout << "\nEra um n�mero de 0 a 10 e voc� digitou errado parab�ns.\n";
}
}while(cc < 0 || cc > 10);

if (cc >= 0 && cc <=5 ){
        cout << "\nComo assim voc� gosta t�o pouco assim de chocolate, melhor doce j� criado.\n";
} if(cc >5 && cc <= 8){
        cout << "\nChocolate � bom demaisss\n";
} if(cc > 8 && cc <=10){
        cout << "\nChocolate � melhor inven��o, por�m tudo em excesso faz mal cuidado.\n";
}

do{
        cout << "\nPor mim ja deu, vamos encerrar nossa conversa? (s ou n)\n";
        cin >> ec;
        ec = toupper(ec);
if(ec != 'S'){
        cout << "\nVoc� n�o tem escolha de nada, e vamos terminar a conversa mesmo assim, tchau tchau\n";
        return 0;
    }
} while(ec != 'S');

        cout << "\nEnfim nossa conversa se encerra por aqui, tenha um bom dia.\n";

        return 0;
    }






