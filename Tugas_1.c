#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int count;

    scanf("%d", &count);

    int values[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &values[i]);
    }

    bubbleSort(values, count);

    for (int i = 0; i < count; i++) {
        printf("%d\n", values[i]);
    }

    return 0;
}
