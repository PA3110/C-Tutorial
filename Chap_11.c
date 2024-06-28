/*
CODES -
# include <stdio.h>
# include <stdlib.h>
//Dynamic Memory Allocation
int main() {
    //sizeof function
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    //malloc
    // int *ptr;
    // ptr = (int *) malloc(5 * sizeof(int));
    // for(int i=0; i<5; i++) {
        // scanf("%d", &ptr[i]);
    // }
    // for(int i=0; i<5; i++) {
        // printf("number %d = %d\n", i+1, ptr[i]);
    // }
    //calloc
    int *ptr = (int *) calloc(5, sizeof(int));
    for(int i=0; i<5; i++) {
        printf("number %d = %d\n", i+1, ptr[i]);
    }
    //free
    free(ptr);
    return 0;
}
*/

/*
Dynamic Memory Allocation - It is a way to allocate memory to a data structure during the runtime.
We need some functions to allocate & free memory dynamically.
*/

/*
Functions for DMA - a. malloc( )   b. calloc( )   c. free( )   d. realloc( )
a. malloc( ) - (memory allocation) takes number of bytes to be allocated & returns a pointer of type void
ptr = (*int) malloc(5 * sizeof(int));

b. calloc( ) - (continuous allocation) initializes with 0
ptr = (*int) calloc(5, sizeof(int));

c. free( ) - We use it to free memory that is allocated using malloc & calloc
free(ptr);

d. realloc( ) - reallocate (increase or decrease) memory using the same pointer & size.
ptr = realloc(ptr, newSize);
*/

/*
Practice Qs65 - WAP to allocate memory to store 5 prices.
# include<stdio.h>
# include<stdlib.h>
int main() {
    int *ptr;
    ptr=(float *)malloc(5*sizeof(float));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for (int i=0;i<5;i++) {
        printf("%d \n", ptr[i]);
    }
    return 0;
}
*/

/*
Practice Qs66 - WAP to allocate memory of size n, where n is entered by the user.
# include<stdio.h>
# include<stdlib.h>
int main() {
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    ptr=(int *)calloc(n, sizeof(int));

    for (int i=0;i<n;i++) {
        printf("%d \n", ptr[i]);
    }
    return 0;
}
*/

/*
Practice Qs67 - In Qs65, free the memory allocated with calloc.

*/

/*
Practice Qs68 - Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
# include<stdio.h>
int main() {
    int *ptr;
    ptr=(int *)calloc(5, sizeof(int));
    printf();
    for (int i=0;i<5;i++) {
        scanf("%d", &ptr[i]);
    }
    ptr=realloc(ptr, 8);
    printf("enter numbers(8): ");
    for (int i=0;i<8;i++) {
        scanf("%d", &ptr[i]);
    }
    //print
    for (int i=0;i<8;i++) {
        printf("number %d is %d", i, ptr[i]);
    }
    return 0;
}
*/

/*
practice Qs69 - Create an array of size 5(using calloc) & enter its values from the user.
# include<stdio.h>
# include<stdlib.h>
int main() {
    int *ptr;
    ptr=(int *)calloc(5, sizeof(int));
    printf("enter numbers(5): ");
    for (int i=0;i<5;i++) {
        scanf("number %d is %d \n", i, ptr[i]);
    }
    return 0;
}
*/

/*
Practice Qs70 - Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr=(int *)calloc(5, sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for (int i=0;i<5;i++) {
        printf("%d \n", ptr[i]);
    }

    ptr=realloc(ptr, 6);
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;
    for (int i=0;i<6;i++) {
        printf("%d \n", ptr[i]);
    }
    return 0;

}
*/

/*
Homework Set Qs1 - Search about what is a 'dangling pointer' in C.
Theory Question.
*/

/*
Homework Set Qs2 - Allocate memory for 500 integers using calloc & then store first 500 natural numbers in that space.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 500 integers using calloc
    int *array = (int *)calloc(500, sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Store the first 500 natural numbers in the allocated memory
    for (int i = 0; i < 500; i++) {
        array[i] = i + 1;
    }

    // Print the stored numbers to verify
    for (int i = 0; i < 500; i++) {
        printf("%d ", array[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    // Free the allocated memory
    free(array);

    return 0;
}

*/

/*
Homework Set Qs3 - Search about what is 'memory leak' in C.
Theory Question.
*/

/*
Homework Set Qs4 - Search & find out which is better malloc( ) or calloc ( ).
Theory Question.
*/