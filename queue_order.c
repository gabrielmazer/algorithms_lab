#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // Ordena em ordem decrescente
}

int main(){

    int n, m;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        scanf("%d", &m);
        int *vector = (int*)malloc(m * sizeof(int));
        int *sorted_vector = (int*)malloc(m * sizeof(int));

        for(int j = 0; j < m; j++){
            scanf("%d", &vector[j]);
            sorted_vector[j] = vector[j];
        }

        qsort(sorted_vector, m, sizeof(int), compare);

        int unchanged = 0;
        for(int j = 0; j < m; j++){
            if(sorted_vector[j] == vector[j]){
                unchanged++;
            }
        }

        printf("%d\n", unchanged);

        free(vector);
        free(sorted_vector);

    }

    return 0;
}