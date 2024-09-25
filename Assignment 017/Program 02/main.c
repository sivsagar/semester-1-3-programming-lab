/*
b) Find the square and cube of any number . Use two
different functions for square and cube 
*/



    #include <stdio.h>

    int square(int num) {
        return num * num;
    }

    int cube(int num) {
        return num * num * num;
    }


    int main() {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        printf("Square of %d is %d\n", number, square(number));
        printf("Cube of %d is %d\n", number, cube(number));

        return 0;
    }



/*
-----------Output------------

*/