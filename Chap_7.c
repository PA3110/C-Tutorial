// Arrays - Collection of similar data types stored at contiguous memory locations.
// Syntax - int marks[3];, char name[10];, float price[2];
/*
# include <stdio.h>
int main() {
    int marks[3];
    printf("physics : ");
    scanf("%d", &marks[0]);
    printf("chem : ");
    scanf("%d", &marks[1]);
    printf("math : ");
    scanf("%d", &marks[2]);
    printf("physics = %d, ", marks[0]); //physics
    printf("chem = %d, ", marks[1]); //chem
    printf("math = %d \n", marks[2]); //math
    return 0;
}
*/
// Input & Output - scanf("%d", &marks[0]);     printf("%d", marks[0]);

// Practice Qs41 - WAP to enter price of 3 items & print their final cost with gst.
/*
# include<stdio.h>
int main() {
    float price[3];
    printf("enter 3 prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    printf("total price 1: %f \n", price[0]+(0.18*price));
    printf("total price 1: %f \n", price[0]+(0.18*price));
    printf("total price 1: %f \n", price[0]+(0.18*price));
}
*/

// Initialisation of Array - int marks[] = {97, 98, 89}; , int marks[3]={97, 98, 89}; 
// memory is reserved,

// Pointer Arithmetic - Pointer can be incremented & decremented
/*
CASE 1 - int age=22; int *ptr=&age; ptr++;
CASE 2 - float price=20.00; float *ptr=&price; ptr++;
CASE 3 - char star='*'; char *ptr=&star; ptr++;
*/

/*
Pointer Arithmetic - We can also subtract one pointer from another.    We can also compare 2 pointers.
# include <stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = 25;
    int *_ptr = &_age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptr = ptr - _ptr;
    printf("%u\n", ptr);
    ptr = &_age;
    printf("%d\n", ptr == _ptr);
    return 0;
}
*/

// Array is a Pointer - int *ptr=&arr[0];   int *ptr=arr;
// Traverse an Array - int aadhar[10]; int *ptr=&aadhar[0];

// Arrays as Function Argument - //Function Declaration
/*
void printNumbers(int arr[], int n) OR void printNumbers(int *arr, int n).
// Function Call - printNumbers(arr, n);
*/

// Multidimensional Arrays - 2D Arrays
/*
int arr[][]={{1,2},{3,4}}; //Declare
// Access
arr[0][0], arr[0][1], arr[1][0], arr[1][1]
*/

/*
Accessing an Array - 
# include <stdio.h>
void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    printNumbers(arr, 6);
    return 0;
}
void printNumbers(int *arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d : %d\n", i, arr[i]);
    }
}
void _printNumbers(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d : %d\n", i, arr[i]);
    }
}
*/

// Practice Qs43 - int arr[]={1, 2, 3, 4, 5} For the given array, what will the following give? a.*(arr+2)  b.*(arr+5)
/*
# include<stdio.h>
int countOdd(int arr[], int n);
int main() {
    int arr[]={1, 2, 3, 4, 5};
    printf("%d \n", *(arr+2));
    printf("%d \n", *(arr+5));
    return 0;
}
int countOdd(int arr[], int n) {
    int count=0;
    for (int i=0;i<n;i++) {
        if (arr[i]%2!=0) {
            count++;
        }
    }
    return count;
}
*/

/*
Practice Qs44 - WAF to reverse an array.
# include<stdio.h>
int reverse(int arr[], int n);
void printArr(int arr[], int n);
int main() {
    int arr[]={1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);
    return 0;
}
void printArr(int arr[], int n) {
    for (int i=0;i<n;i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
int reverseint arr[], int n) {
    for (int i=0;i<n/2;i++) {
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1]=firstVal;
    }
}
*/

/*
Practice Qs45 - WAP to store the first n fibonacci number.
# include<stdio.h>
int main() {
    int n;
    printf("enter n(n>2): ");
    scanf("%d", &n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for (int i;i<n;i++) {
        fib[i]=fib[i-q]+fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;
}
*/

/*
Practice Qs46 - Create a 2D array, storing the tables of 2 & 3.
# include<stdio.h>
void storeTable(int arr[][10], int n, int m, int number);
int main() {
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    for (int i=0;i<10;i++) {
        printf("%d \t", tables[0][i]);
    }
    for (int i=0;i<10;i++) {
        print("%d \t", tabl;es[1][i]);
    }
    return 0;
}
void storeTable(int arr[][10], int n, int m, int number) {
    for (int i=0;i<m;i++) {
        arr[n][m]=nummber*(i+1);
    }
}

*/

/*
Homework Set Qs1 - In an array of numbers, find how many times does a number 'x' occurs.
#include <stdio.h>

// Function to count occurrences of 'x' in the array
int countOccurrences(int arr[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, x;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number 'x' to find
    printf("Enter the number to find occurrences of: ");
    scanf("%d", &x);

    // Count occurrences of 'x' in the array
    int occurrences = countOccurrences(arr, size, x);

    // Print the result
    printf("The number %d occurs %d times in the array.\n", x, occurrences);

    return 0;
}

*/

/*
Homework Set Qs2 - WAP to print the largest number in an array.
#include <stdio.h>

// Function to find the largest number in an array
int findLargest(int arr[], int size) {
    int largest = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest number in the array
    int largest = findLargest(arr, size);

    // Print the largest number
    printf("The largest number in the array is %d.\n", largest);

    return 0;
}

*/

/*
Homework Set Qs3 - WAP to insert an element at the end of an array.
#include <stdio.h>

int main() {
    int size, newElement;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; // Array with an extra space for the new element

    // Input the elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the new element to be inserted
    printf("Enter the new element to insert at the end: ");
    scanf("%d", &newElement);

    // Insert the new element at the end
    arr[size] = newElement;

    // Print the updated array
    printf("The updated array is:\n");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

*/