//https://judge.beecrowd.com/pt/problems/view/1002

#include <stdio.h>
#include <stdlib.h>

int main(){
    double n = 3.14159;
    double raio;

    scanf("%lf", &raio);

    printf("A=%.4lf\n", raio*raio*n);

    return 0;
}