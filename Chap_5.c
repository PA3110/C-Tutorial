// Functions - block of code that perform particular task 
// Takes Argument ---> Do Work ---> Return Result  (it can be used multiple times, increase code reusability)

// Syntax_1 - Function Prototype 
// void printHello(); <----     > Tell the compiler

// Syntax_2 - 
/*
Function Definition - 

void printHello() {
    printf("Hello");   <----
}

> Do the work
*/

// Syntax_3 - 
/*
Function Call - 

int main() {
    printHello();   <-----
    return 0;
}

> Use the work
*/

// Properties - 
/*
- Execution always starts from main.
- A function gets called directly or indirectly from main.
- Three can be multiple functions in a proigram.

*/

// Function Types - Library Function(Special functions inbuilt in C scanf(),printf()), User-defined Function(declared & defines by programmer)

// Passing Arguments - functions can take value & give some value - parameter, return value

// Passing Arguments - void printHello();, void printTable(int n);, int sum(int a, int b);

// Argument v/s Parameter - values that are passed in function call, used to send value, actual parameter.......
// Parameter - values in function declaration & definition, used to receive value, formal parameters

// NOTE - a. Function can only return one value at a time.  b. Changes to parameter in function don't change the values in calling function. 
// (Because a copy of argument is passed to the function)

// Function to print Hello
/*
#include<stdio.h>
//function declaration/prototype
void printHello();
int main() {
    //function call
    printHello();
    return 0;
}
//function definition
void printHello() {
    printf("Hello!\n");
}
*/

// Function to calculate square of a number
/*
# include <stdio.h>
//function to calculate square of a number
int calcSquare(int n);
int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("square is : %d", calcSquare(n));
    return 0;
}
int calcSquare(int n) {
    return n * n;
}
*/

// Recursion ---> When a function calls itself, it's called recursion
// Properties of Recursion - a. Anything that can be done with Iteration, can be done with recursion and vice-versa.
// b. Recursion can sometimes give the most simple solution.   c. Base Case is the condition which stops recursion.
// d. Iteration has infinite loop & Recursion has stack overflow.

// Function to calculate n factorial (using recursion)
/*
# include <stdio.h>
//function to print factorial of n
int factorial(int n);
int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}
int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factnm1 * n;
    return factn;
}
*/

/*
Practice Qs27 - Write 2 functions - one to print "Hello" & second to print "good bye".
#include<stdio.h>
void printHello();
void printGoodbye();
int main() {
    printHello();
    printGoodbye();
    return 0;
}

void printHello() {
    printf("Hello! \n");
}

void printGoodbye() {
    printf("Goodbye:) \n");
}
*/

/*
Practice Qs28 - WAF that prints Namaste if user is Indian & Bonjour if the user is French.
#include<stdio.h>
void namaste();
void bonjour();
int main() {
    printf("enter f for frensh & i for indian: ");
    char ch;
    scanf("%c", &ch);
    if (ch=='i') {
        namaste();
    } else {
        bonjour();
    }
    return 0;
}

void namaste () {
    print("Namaste \n");
}

void bonjour () {
    print("Bonjour \n");
}

*/

/*
Practice Qs29 - Use library functions to calculate the square of a number given by user.
#include<stdio.h>
#include<math.h>
void calculatePrice(float value);
int main() {
    // float value=100.0;
    // calculatePrice(value);
    // printf("value is: %f\n", value);
    int n=4;
    printf("%f", pow(n, 2))
    return 0;
}
void calculatePrice(float value) {
    value=value+(0.18*value);
    printf("final price is: %f\n", value);
}
*/

// Practice Qs31 - WAF to calculate area of a square, a circle & a rectangle.
/*
#include<stdio.h>
#include<math.h>
float squareArea(float side);
float cicrleArea(float rad);
float rectangleArea(float a, float b);

int main() {
    float a=5.0;
    float b=10.0;
    printf("area is: %f", rectangleArea(a, b));
    return 0;
}

float squareArea(float side) {
    return side*side;
}

float circleArea(float rad) {
    return 3.14*rad*rad;
}

float rectangleArea(float a, float b) {
    return a*b;
}
*/

// Practice Qs32 - Print "Hello World" 5 times.
/*
#include<stdio.h>
void printHW(int count);
int main() {
    printHW(5)
    return 0;
}
void printHW(int count) {
    if (count==0) {
        return;
    }
    printf("Hello World \n");
    printHW(count-1);
}
*/

// Practice Qs30 - Sum of first n natural numbers.
/*
#include<stdio.h>
int sum();
int main() {
    printf("sum is: %d", sum(5));
    return 0;
}
//recursive function
int sum(int n) {
    if (n==1) {
        return 1;
    }
    int sumNm1=sum(n-1); //sum of 1 to n
    int sumN=sumNm1+n;
    return sumN;
}
*/

//Practice Qs31 - Factorial of n.
/*
#include<stdio.h>
int fact(int n);
int main() {
    printf("sum is: %d", fact(5));
    return 0;
}
int fact(int n) {
    if (n==0) {
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;

}
*/

// Practice Qs32 - WAF to convert celsius to fahrenheit.
/*
#include<stdio.h>
float convertTemp(float celsius);
int main() {
    float far=convertTemp(0);
    printf("far: %f", far);
    return 0;
}
float convertTemp(float celsius) {
    float far=celsius*(9/5)+32;
    return far;
}
*/

// Practice Qs33 - WAF to calculate Percentage of a student from Marks in Science, Math & Sanskrit.
/*
#include<stdio.h>
int calcPercentage(itn science, int math, int sanskrit);
int main() {
    int sc=98;
    int math=95;
    int sanskrit=99;
    printf("percentage is: %d", calcPercentage(sc, math, sanskrit));
    return 0;
}
int calcPercentage() {
    return ((science+math+sanskrit)/3)*100;
}
*/

// Practice Qs34 - WAF to print n terms of the fibonacci sequence.
/*
#include<stdio.h>
int fib(int n);
int main() {
    fib(6);
    return 0;
}
int fib(int n) {
    if (n==0 || n==1) {
        if (n==0) {
            return 0;
        }
        if (n==1) {
            return
        }
    }
int fibNm1=fib(n-1);
int fibNm2=fib(n-2);
int fibN=fibNm1+fibNm2;
printf("fib of %d is: %d \n", n, fibN);
return fibN;
}
*/

// WAF to print the nth term of the fibonacci sequence.
/*
#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0; // The 0th term is 0
    if (n == 1)
        return 1; // The 1st term is 1

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth term of the Fibonacci sequence is %d.\n", n, result);

    return 0;
}

*/

// Homework Set Qs1 - WAF to find sum of digits of a number.
/*
#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit from the number
    }
    return sum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = sumOfDigits(num);
    printf("The sum of the digits of %d is %d.\n", num, result);

    return 0;
}

*/

// Homework Set Qs2 - WAF to find square root of a number.
/*
#include <stdio.h>
#include <math.h>

// Function to calculate the square root of a number
double findSquareRoot(double num) {
    return sqrt(num);
}

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Error: Cannot calculate the square root of a negative number.\n");
    } else {
        double result = findSquareRoot(num);
        printf("The square root of %.2f is %.2f.\n", num, result);
    }

    return 0;
}

*/

// Homework Set Qs1 - WAF to print "Hot" or "Cold" depending on the temperature user enters.
/*
#include <stdio.h>

// Function to determine if the temperature is hot or cold
void checkTemperature(int temperature) {
    int threshold = 30; // Define the threshold for hot or cold
    if (temperature >= threshold) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }
}

int main() {
    int temperature;
    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    checkTemperature(temperature);

    return 0;
}

*/


// Homework Set Qs1 - Make your own pow function.
/*
#include <stdio.h>

// Function to calculate the power of a number
double customPow(double base, int exponent) {
    double result = 1.0;
    int absExponent = exponent < 0 ? -exponent : exponent; // Absolute value of the exponent

    for (int i = 0; i < absExponent; i++) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result; // If the exponent is negative, take the reciprocal
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = customPow(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}

*/

