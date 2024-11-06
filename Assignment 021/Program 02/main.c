/* Print the values of two arrays (one consists of integers and other of floats) and their addresses.*/
#include <stdio.h>

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    int floatArraySize = sizeof(floatArray) / sizeof(floatArray[0]);

    printf("Integer array values and addresses:\n");
    for (int i = 0; i < intArraySize; i++) {
        printf("Value: %d, Address: %p\n", intArray[i], (void*)&intArray[i]);
    }

    printf("\nFloat array values and addresses:\n");
    for (int i = 0; i < floatArraySize; i++) {
        printf("Value: %.1f, Address: %p\n", floatArray[i], (void*)&floatArray[i]);
    }

    return 0;
}