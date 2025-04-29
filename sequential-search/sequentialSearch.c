#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* sequentialSearch(int array[], int array_size, int target) {
    char* answer = (char*)malloc(100 * sizeof(char));
    if (answer == NULL) {
        return "Erro de alocação de memória";
    }

    for (int index = 0; index < array_size; index++) {
        if (array[index] == target) {
            snprintf(answer, 100, "O elemento %d foi encontrado no array.", target);
            return answer;
        }
    }
    snprintf(answer, 100, "O elemento %d não foi encontrado no array.", target);
    return answer;
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array) / sizeof(array[0]);

    int target = 10;

    char* answer = sequentialSearch(array, array_size, target);
    printf("%s\n", answer);

    free(answer);

    return 0;
}