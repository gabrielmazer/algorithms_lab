#include <stdlib.h>
#include <stdio.h>

int main(){
    int **matrix;
    int lines, columns;
    int total_liters, bags, liters;

    while (scanf("%d %d", &lines, &columns) != EOF) {
        total_liters = bags = liters = 0;

        matrix = (int**)malloc(lines * sizeof(int*));

        for(int i = 0; i < lines; i++){
            matrix[i] = (int*)malloc(columns * sizeof(int));
        }

        for(int i = 0; i < lines; i++){
            for(int j = 0; j < columns; j++){
                scanf("%d", &matrix[i][j]);
                total_liters += matrix[i][j];
            }
        }

        bags = total_liters / 60;
        liters = total_liters % 60;

        printf("%d saca(s) e %d litro(s)\n", bags, liters);

        for (int i = 0; i < lines; i++) {
            free(matrix[i]);
        }
        free(matrix);
    }

    return 0;
}