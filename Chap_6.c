// Pointers - A variable that stores the memory address of another varibale.
// Syntax - int age=22;, int *ptr=&age;, int _age=*ptr;.
// Declaring Pointers - int *ptr;, char *ptr;, float *ptr;.
// Format Specifier - printf("%p", &age); printf("%p", ptr); printf("%p", &ptr);.

/*
1. Syntax
#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);
    //address
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    //data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}
*/

// Pointer to pointer - A variable that stores the memory address of another pointer.
// Syntax - int **pptr; char **pptr; float **pptr;

// Pointer in Function Call - Call by Value(we pass value of variable as argument) & Call by Reference(we pass address of variable as argument).

/*
Pointers in Function call
# include <stdio.h>
void square(int n);
void _square(int* n);
int main() {
    int number = 4;
    //call by value
    square(number);
    printf("n is : %d\n", number);
    //call by reference
    _square(&number);
    printf("n is : %d\n", number);
    return 0;
}
void square(int n) {
    n = n * n;
    printf("square is : %d\n", n);
}
void _square(int* n) {
    *n = *n * *n;
    printf("square is : %d\n", *n);
}
*/

/*
Swap 2 numbers
# include <stdio.h>
void swap(int a, int b);
void _swap(int* a, int *b);
int main() {
    int x = 3, y = 5;
    //call by value
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    //call by reference
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    return 0;
}
void swap(int a, int b) {
    int t = a;
    a = b;
    b = a;
}
void _swap(int* a, int* b) {
    int t = *a;
    *a = *b;    
    *b = *a;
*/

// Practice Qs36 - Find the Output.
/*
int *ptr;
int x;
ptr = &x;
*ptr = 0;
printf("x=%d \n", x);
printf(" *ptr=%d \n", *ptr);
*ptr +=5;
printf("x=%d \n",x);
printf(" *ptr= %d\n", *ptr);
(*ptr)++;
printf("x=%d \n", x);
printf("*ptr=%d \n", *ptr);
*/

// Practice Qs38 - Swap 2 numbers, a & b.
/*
# include<stdio.h>
void swap(int a, int b);
int main() {
    int x=3, y=5;
    _swap(&x, &y);
    printf("x=%d & y=%d\n", x, y);
    return 0;
}
//call by reference
void _swap(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}
//call by value
void swap(int a, int b) {
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d \n", a, b);
}
*/

// Practice Qs39 - Will the address output be same?
/*
void printAddress(int n);
int main() {
    int n=4;
    printf("%p \n", &n);
    printAddress(n);
    return 0;
}
void printAddress(int n) {
    printf("%p \n", &n);
}
*/

// Practice Qs40 - WAF to calculate the sum, product & average of 2 numbers. Print that average in the main function.
/*
#include<stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);
int main() {
    int a=3, int b=5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum= %d, prod= %d, avg= %d\n", sum, prod, avg);
    return 0;
}
void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum=a+b;
    *prod=a+b;
    *avg=(a+b)/2
}
*/

/*
Homework Set Qs1 - WAP in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>

// Function to find the maximum number using pointers
int findMax(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Find the maximum number using the findMax function
    int max = findMax(&num1, &num2);
    
    // Print the result
    printf("The maximum number between %d and %d is %d.\n", num1, num2, max);

    return 0;
}

*/

/*
Homework Set Qs1 - WAP in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>

// Function to find the maximum number using pointers
int findMax(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Find the maximum number using the findMax function
    int max = findMax(&num1, &num2);
    
    // Print the result
    printf("The maximum number between %d and %d is %d.\n", num1, num2, max);

    return 0;
}

*/

/*
Homework Set Qs1 - WAP in C to print all the letters in english alphabet using a pointer.
#include <stdio.h>

int main() {
    char alphabet[26];
    char *ptr;

    // Initialize the alphabet array with lowercase letters
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }

    // Point to the first element of the alphabet array
    ptr = alphabet;

    // Print all the letters using the pointer
    printf("The letters in the English alphabet are:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

*/

