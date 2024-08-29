#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int hora_inicial=0, minuto_inicial=0, hora_final=0, minuto_final=0;
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

    int inicio = hora_inicial*60 + minuto_inicial;
    int final = hora_final*60 + minuto_final;

    int tempo = final - inicio;

    if(tempo <=0 ){
        tempo += 1440;
    }

    cout << "O JOGO DUROU " << tempo/60 << " HORA(S) E " <<  tempo%60 << " MINUTO(S)" << endl;
    

    return 0;
}