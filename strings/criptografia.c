//1024
#include "stdio.h"
#include "string.h"

void main()
{
    unsigned numero;
    unsigned short i, j, tamanho, metade;
    char palavra[1100], aux;

    scanf("%u", &numero);


    while (numero){
        scanf(" %[^\n]", palavra);

        tamanho = strlen(palavra);
        metade = tamanho/2;

        //primeira passada
        for (i = 0; i < tamanho; i++){
            if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z')){
                palavra[i] = palavra[i] + 3;
            }
        }

        //segunda passada
        j = tamanho - 1;
        for (i = 0; i < metade; i++, j--){
            aux = palavra[j];
            palavra[j] = palavra[i];
            palavra[i] = aux;
        }

        //terceira passada
        for (i = metade; i < tamanho; i++){
            if ((palavra[i] >= 32 && palavra[i] <= 176 )){
                palavra[i] = palavra[i] - 1;
            }
        }

        printf("%s\n", palavra);

        //Reseta a string para a proxima iteração;
        memset(palavra, 0 , sizeof(palavra));
        numero--;
    }
}
/*
A expressão scanf(" %[^\n]", palavra); é usada para ler uma linha de texto (ou uma string) até encontrar uma quebra de linha (\n). Vou explicar cada parte desse comando:
Descrição de scanf(" %[^\n]", palavra);

    scanf(): É uma função da biblioteca padrão de C (stdio.h) que é usada para ler dados da entrada padrão (normalmente o teclado).

    " %[^\n]": Esse é o especificador de formato usado no scanf().
        %: Indica que se deseja ler um valor.
        [: Indica o início de uma "lista de caracteres permitidos" ou "conjunto de caracteres".
        ^: Quando usado dentro de colchetes ([]), o ^ significa "negação". Ou seja, queremos ler todos os caracteres que não sejam o que vem depois.
        \n: O caractere de nova linha (quebra de linha). Portanto, ^[^\n] significa que queremos ler todos os caracteres até encontrar um \n.
        (espaço em branco antes de %[^\n]): Esse espaço extra é importante porque faz com que o scanf() ignore caracteres de espaço em branco, como \n ou \t (quebra de linha ou tabulação) antes de começar a ler.

    palavra: Esta é a variável onde a string lida será armazenada. Nesse caso, palavra deve ser um array de caracteres previamente declarado.

Atenção:

Usar scanf() dessa forma não é muito seguro se o tamanho do array palavra não for limitado corretamente, pois pode ocorrer overflow (quando o usuário insere mais caracteres do que o array pode armazenar). É recomendado utilizar uma função mais segura, como fgets(), para evitar esse problema.

Por exemplo, uma alternativa mais segura seria:

fgets(palavra, sizeof(palavra), stdin);

Aqui, fgets() garante que não vai ler mais caracteres do que o tamanho do buffer permite.

*/