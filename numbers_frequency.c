#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int valores[2001] = {0};

    for(int i = 0; i < N; i++){
        int X;
        scanf("%d", &X);
        valores[X]++;
    }

    for(int i = 0; i <= 2000; i++){
        if(valores[i] > 0){
            printf("%d aparece %d vez(s)\n", i, valores[i]);
        }
    }

    return 0;
}