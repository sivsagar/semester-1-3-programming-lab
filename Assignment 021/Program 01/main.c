/*Take n (number of elements in the array) from user and 
    then take n elements (int or float) from user and store 
    it in the array.*/
    #include <stdio.h>

    int main() {
        int n, i;
        printf("Enter the number of elements: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("The elements in the array are:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }

        return 0;
    }

    /*-----------------OUTPUT---------------
    Enter the number of elements: 4
Enter 4 elements:
1 2 3 4
The elements in the array are:
1 2 3 4*/