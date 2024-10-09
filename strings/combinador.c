//1238
#include <string.h>
#include <stdio.h>

int main(){
    int N, p, tam, i, j;
    char A[51], B[51], resposta[102];

    scanf("%d\n", &N);

    for(i = 0; i < N; ++i){
        scanf("%s %s\n", &A, &B);

        memset(resposta, '\0', sizeof(resposta));
        tam = strlen(A) < strlen(B) ? strlen(A) : strlen(B);
        p = 0;
        for(j = 0; j < tam; ++j){
            resposta[p++] = A[j];
            resposta[p++] = B[j];
        }

        if(tam < strlen(A)){
            for(j = tam; j < strlen(A); ++j){
                resposta[p++] = A[j];
            }
        }
        if(tam < strlen(B)){
            for(j = tam; j < strlen(B); ++j){
                resposta[p++] = B[j];
            }
        }

        printf("%s\n", resposta);
    }

    return 0;
}