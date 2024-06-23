// Instructions-These are statements in a program.
// Types-Type Declaration Instructions, Arithmetic Instructions, Control Instructions

// Type Declaration Instructions-->Declare var before using it.
// Valid--int a=22; int b=a; int c=b+1; int d=1, e; int a,b,c; a=b=c=1;
// Invalid--int a=22; int b=a; int c=b+2; int d=2,e; int a,b,c=1;

// #include<stdio.h>
// int main() {
//     int age = 22;
//     int oldAge = age;
//     int newAge = oldAge + 2;    
//     printf("new age is : %d", newAge);
//     int rupee = 1, dollar;
//     dollar = 74;
/*
// order of declaration is important - Wrong Declaration Order
//     float pi = 3.14;
//     float area = pi * rad * rad;
//     float rad = 3;
*/
// valid declaration
//     int age1, age2, age3;
//     age1 = age2 = age3 = 22;
//invalid
//  int a1 = a2 = a3 = 22;
//     return 0;

// Arithmetic Instructions-- a+b(Operand1, Operator, Operand2)
// Note-single variable on the LHS
// Valid - +,-,*,/,%     Invalid - b+c=a, a=bc, a=b^c
// Note-pow(x,y) for x to the power y 
// Modular Operator %-Returns remainder for int....3%2=1, -3%2=-1

/* #include<stdio.h>
int main() {
    int a = 1, b = 2, c = 3;
//valid
    a = b + c;
//invalid
// b + c = a;
    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);
    return 0;
} */

/*
> Type Conversion - int op int-->int, int op float-->, float op float-->float
#include<stdio.h>
int main() {
    int a=(int)1.99999;
    printf("%d \n", a);
    printf("sum of 2 & 3 : %d", 2 + 3);
    printf("sum of 2.0 & 3 : %f", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);
    return 0;
}
*/

// Operator Prececdence-*,/,%-->+,- -->=
/*
> Associativity for same precedence - Left to Right
#include<stdio.h>
int main() {
    printf(" Output : %d", 5+2/2*3);
    return 0;
}
*/

// Control Instrutions-used to determine flow of program
// Types-Sequence control, Decision Control, Loop Control, Case Control

// Operators - Arithmetic Operators, Relational, Logical, Bitwise, Assignemnt, Ternary Operator
// Relational Operators-==,>,>=,<,<=,!=
/*
#include<stdio.h>
int main() {
    printf("%d \n", 4==4);
    printf("%d \n", 4<3);   
    printf("%d \n", 3<4);
    printf("%d \n", 4<4);
    printf("%d \n", 4<=4);
    printf("%d \n", 4>3);
    printf("%d \n", 3>4);
    printf("%d \n", 4>4);
    printf("%d \n", 4>=4);
    printf("%d \n", 4!=4);
    printf("%d \n", 3!=4);
    return 0;
}
*/

// Logical Operators-&&(AND), ||(OR), !(NOT)
/*
#include<stdio.h>
int main() {
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3>4 && 5>4);
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", !(3<4 && 3<5));
    printf("%d \n", !(4<3 || 5<3));
    return 0;
}
*/

// Operator Precedence-!--->*,/,%--->+,---><,<=,>,>=--->==,!=--->&&--->||--->=

// Assignment Operators-=,+=,-=,*=,/=,%=
/*
# include <stdio.h>
int main() {
    int a = 10;
    a += 10;
    printf("a+10 = %d \n", a);
    a -= 10;
    printf("a-10 = %d \n", a);
    a *= 10;
    printf("a*10 = %d \n", a);
    a /= 10;
    printf("a/10 = %d \n", a);
    a %= 10;
    printf("a%c10 = %d \n", '%', a);
    return 0;
}
*/

// Practice Qs 5,6-WAP to check if a number is divisible by 2 or not, WAP to check if a number is odd or even.

// #include<stdio.h>
// int main() {
//     int a;
//     printf("enter a: ");
//     scanf("%d", &a);
//     printf("%d", a%2==0:);
//     return 0;
// }

// if it prints 1 then even, if odd then 0.

// Practice Qs 7-Are the following valid or not? a.int a=8^8 b.intx; int y=x; c.int x, y=x; d.char stars='**';

/*
a. doesn't give the required ans but is a valid.
b. is a valid
c. is not a valid gives error
d. gives error
*/

// Practice Qs 8-Print 1(True) or 0(False) for following statements :
/*
a. if it's sunday & it's snowing -> True
b. if it's monday or it's raining -> True
c. if a number is greater than 9 & less than 100 -> True(2 digit number)
*/

// #include<stdio.h>
// int main() {
    // int isSunday=1;
    // int isSnowing=1;
    // printf("%d \n", isSunday && isSnowing);
    // int isMonday=0;
    // int isRaining=1;
    // printf("%d \n", isMonday || isRaining);
//     int x;
//     printf("enter number: ");
//     scanf("%d", &x);
//     printf("%d \n", x>9 && x<100);
//     return 0;
// }

// Homework Set Ques1-WAP to print the average of 3 numbers.

// #include <stdio.h>

// int main() {
//     float num1, num2, num3, average;

//     // Taking input from the user
//     printf("Enter first number: ");
//     scanf("%f", &num1);

//     printf("Enter second number: ");
//     scanf("%f", &num2);

//     printf("Enter third number: ");
//     scanf("%f", &num3);

//     // Calculating the average
//     average = (num1 + num2 + num3) / 3;

//     // Printing the average
//     printf("The average of the three numbers is: %.2f\n", average);

//     return 0;
// }

// Ques2-WAP to check if given character is digit or not.

/*
#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is not a digit.\n", ch);
    }

    return 0;
}
*/

// Ques3-Wap to print the smallest number.

/*
#include <stdio.h>

int main() {
    float num1, num2, num3, smallest;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter third number: ");
    scanf("%f", &num3);

    // Finding the smallest number
    smallest = num1; // Assume first number is the smallest

    if (num2 < smallest) {
        smallest = num2; // Update smallest if second number is smaller
    }

    if (num3 < smallest) {
        smallest = num3; // Update smallest if third number is smaller
    }

    // Printing the smallest number
    printf("The smallest number is: %.2f\n", smallest);

    return 0;
}

*/