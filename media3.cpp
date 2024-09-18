#include <iostream>
#include <iomanip>

using namespace std;

float media(float a, float b, float c, float d){
    return (a * 2 + b * 3 + c * 4 + d * 1) / 10.0;
}

void mensagem_aprovado(){
    cout << "Aluno aprovado." << endl;
}
void mensagem_reprovado(){
    cout << "Aluno reprovado." << endl;
}

void mensagem_media(float valor){
    cout << "Media: " << valor << endl;
}

void aprovado(float valor){
    mensagem_media(valor);
    mensagem_aprovado();
}

void reprovado(float valor){
    mensagem_media(valor);
    mensagem_reprovado();
}

void resultado_exame(float valor, float exame){

    float nota_final = (valor + exame) / 2.0;

    mensagem_media(valor);
    cout << "Aluno em exame." << endl;
    cout << "Nota do exame: " << exame << endl;
    
    if(nota_final >= 5.0){
        mensagem_aprovado();
        cout << "Media final: " << nota_final << endl;
    } else {
        mensagem_reprovado();
        cout << "Media final: " << nota_final << endl;
    }

}

int main(int argc, char const *argv[])
{
    float a=0, b=0, c=0, d=0, valor=0, exame=0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << fixed << setprecision(1);

    valor = media(a, b, c, d);

    if(valor >= 7.0){
        aprovado(valor);
    } else if(valor < 5.0){
        reprovado(valor);
    } else {
        cin >> exame;
        resultado_exame(valor, exame);
    }

    return 0;
}
