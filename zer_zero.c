#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int value1, value2;
    char str[20], resultado[20];

    scanf("%d %d", &value1, &value2);

    while(value1 != 0 && value2 != 0){
        sprintf(str, "%d", value1 + value2);

        int j = 0;

        for(int i = 0; i < strlen(str); i++){
            if(str[i] != '0'){
                resultado[j] = str[i];
                j++;
            }
        }

        resultado[j] = '\0';

        printf("%s\n", resultado);

        scanf("%d %d", &value1, &value2);
    }

    return 0;
}