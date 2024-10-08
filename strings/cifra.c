//1253
#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[]){

    int numero_casos = 0, mudanca = 0, i = 0, j = 0;
    char str[51];

    scanf("%d", &numero_casos);
    getchar(); // Consome o '\n' após a leitura do número de casos

    for(j = 0; j < numero_casos; ++j){

        scanf("%[^\n]", str);
        scanf("%d", &mudanca);

        for ( i = 0; i < strlen(str); ++i){
            str[i] = ((str[i] - 'A' - mudanca + 26) % 26) + 'A';
        }

        printf("%s\n", str);
    }
    return 0;
}
