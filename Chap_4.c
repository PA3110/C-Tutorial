// Loop Control Instructions - To repeat some parts of the program
// Tyoes-for, while, do while

/*
for Loop
for(initialisation; condition; updation) {
//do something
}

Special Things - 
- Increment Operator ++
- Decrement Operator --
- Loop counter can be float or even character
- Infinite Loop
*/

/*
Practice Qs13-Print the numbers from 0 to 10. 0,1,2,3,4,5,6,7,8,9,10.
#include<stdio.h>
int main() {
    for (int i=0;i<=10;i++) {
        printf("%d \n", i);
    }
    return 0;
}
*/

/*
while Loop - 
while(condition) {
//do

Like - 
while (true) {
.......
}
for (; ;) {
.....
}
*/

/*
Practice Qs14 - Print the numbers from 0 to n, if n is given by user,n=4.
#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int i=0;
    while (i<=n) {
        printf("%d \n", i);
        i++;
    }
    for (int i=0;i<=-n;i++) {
        printf("%d \n", i);
    }
    return 0;
}
*/

/*
do while Loop - 
do {
//do something
} while(condition);
*/

/*
Practice Qs15- Print the sum of first n natural numbers.n=4,Also, print them in reverse.
#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int sum=0;
    for (int i=1;i<=n;i++) {
        sum=sum+i;
    }
    printf("sum is %d \n", sum);
    return 0;
}
*/

/*
break Statement - exit the loop
continue statement - skip to next iteration
Nested Loops - 
for( .. ) {
    for( .. ) {
    }
}
*/

/*
Syntax of 3 Loops
# include <stdio.h>
int main () {
    //for loop
    for(int i=1; i<=100; i++) {
        printf("%d\n", i);
    }
    //while loop
    int i=1;
    while(i<=100) {
        printf("%d\n", i);
        i++;    
    }
    //do while loop
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while(i<=100);
    return 0;
*/

/*
Practice Qs16 - Print the table of a number input by the user.
#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    for (int i=1;i<=10;i++) {
        printf("%d \n", n*i);
    }
    return 0;
}
*/

/*
Practice Qs17 - Keep taking nnumbers as input from user until user enters an odd number.
#include<stdio.h>
int main() {
    int n;
    do {
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n%2!=0) {
            break;
        }
    } while(1);
    printf("thank you");
    return 0;
}
*/

/*
Practice Qs18 - Keep taking numbers as input from user until user enters a number which is multiple of 7.

#include<stdio.h>
int main() {
    int n;
    do {
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n%7!=0) {
            break;
        }
    } while(1);
    printf("thank you");
    return 0;
}
*/

/*
Practice Qs19 - Print all numbers from 1 to 10 except for 6.
#include<stdio.h>
int main() {
    for (int i=1;i<=10;i++) {
        if (i==6) {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}
*/

/*
Practice Qs20 - Print all the odd numbers from 5 to 50.
#include<stdio.h>
int main() {
    for (int i=5;i<=50;i++) {
        if (i%2!=0) {
            printf("%d \n", i);
        }
    }
    return 0;
}
*/

/*
Practice Qs21 - Print the factorial of a number n.
#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int fact=1;
    for (int i=1;i<=n;i++) {
        fact=fact*i;
    }
    printf("final factorial is %d", fact);
    return 0;
}
*/

/*
Practice Qs22 - Print reverse of the table for n number n.
#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    for (int i=10;i>=1;i--) {
        printf("%d \n", n*i);
    }
    return 0;
}
*/

/*
Practice Qs23 - Calculate the sum of all numbers between 5 and 50.(including 5 & 50)
#include<stdio.h>
int main() {
    int n;
    int sum=0;
    scanf("%d", &n);
    for (int i=5;i<=50;i++) {
        sum+=i;
    }
    printf("sum of %d", sum); 
    return 0;
}
*/

/*
Homework Set Qs1 - Search on what a "nested loop" is & print this
pattern using it.
*****
*****
*****
*****

#include <stdio.h>

int main() {
    int rows = 4;
    int columns = 5;

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns
        for (int j = 0; j < columns; j++) {
            printf("*");
        }
        // Print a new line after each row
        printf("\n");
    }

    return 0;
}

*/

/*
Homework Set Qs2 - WAP to check if a number is prime or not.

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Numbers less than or equal to 1 are not prime
    if (num == 2)
        return 1; // 2 is the only even prime number
    if (num % 2 == 0)
        return 0; // All other even numbers are not prime

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return 0; // Number is divisible by i, so it's not prime
    }
    return 1; // Number is prime
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

*/

/*
Homework Set Qs3 - WAP to print prime numbers in a range.

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Numbers less than or equal to 1 are not prime
    if (num == 2)
        return 1; // 2 is the only even prime number
    if (num % 2 == 0)
        return 0; // All other even numbers are not prime

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return 0; // Number is divisible by i, so it's not prime
    }
    return 1; // Number is prime
}

int main() {
    int lower, upper;
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

*/


