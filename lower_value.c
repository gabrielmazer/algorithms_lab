#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int lower;
    int position;

    scanf("%d", &n);

    int *vector = (int*)malloc(n *sizeof(int));
    if(vector == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &vector[i]);

        if(i == 0){
            lower = vector[i];
            position = i;
        }
        else{
            if(vector[i] < lower){
                lower = vector[i];
                position = i;
            }
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", lower, position);

    return 0;
}