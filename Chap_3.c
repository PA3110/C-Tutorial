// Conditional Statements-Types(if-else, Switch)
/*
if-else - 
if(condition) {
    //do something if True
} else {
    // do something if False
}
Note - else is optional block can also work without {}
*/ 

/*
#include<stdio.h>
int main() {
    int age = 19;
    if(age >= 18) {
        printf("you are an adult");
    } else {
        printf("you are not an adult");
    }
    return 0;
}
*/

/*
> check if a number is odd or even
#include<stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
}
*/

/*
else if - 
if(Condition 1) {
    //do something if TRUE
}
else if (Condition 2) {
    //do something if 1st is FALSE & 2nd is TRUE
}
*/

/*
> Use of else if
#include<stdio.h>
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if(age < 12) {
        printf("child");
    }
    else if(age < 18) {
        printf("teenager");
    }
    else {
        printf("adult");
    }
    return 0;
*/

/*
Ternary Operator - Condition ? doSomething if TRUE : doSomething if FALSE;

#include<stdio.h>
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    age > 18 ? printf("adult \n") : printf("not adult \n");
    int number = 7;
    int luckyNumber = 7;
    number == luckyNumber ? printf("you are lucky \n") : printf("you are not lucky \n");
*/

/*
switch(Properties) - a.Cases can be in any order.  b.Nested switch(switch inside switch) are allowed.
switch(number) {
case C1: //do something
    break;
case C2 : //do something
    break;
default : //do something
}

Switch (integer) -
#include<stdio.h>
#include<math.h>
int main() {
    int day = 5;
    switch(day) {
        case 1 : printf("monday \n");
            break;
        case 2 : printf("tuesday \n");
            break;
        case 3 : printf("wednesday \n");
            break;
        case 4 : printf("thursday \n");
            break;
        case 5 : printf("friday \n");
            break;
        case 6 : printf("saturday \n");
            break;
        case 7 : printf("sunday \n");
            break;
    }
    return 0;
}


Switch (character)
#include<stdio.h>
#include<math.h>
int main() {
    char day = 'f';
    switch(day) {
        case 'm' : printf("monday \n");
            break;
        case 't' : printf("tuesday \n");
            break;
        case 'w' : printf("wednesday \n");
            break;
        case 'T' : printf("thursday \n");
            break;
        case 'f' : printf("friday \n");
            break;
        case 's' : printf("saturday \n");
            break;
        case 'S' : printf("sunday \n");
            break;
    }
    return 0;

*/

/*
Practice Qs9 - WAP to check if a student passed or failed. marks>30 is PASS, <=30 FAIL.

#include<stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d", &marks);
    if (marks>=0 && marks<=30) {
        printf("FAIL \n");
    } else if(marks>30 && marks<=100){
        printf("PASS \n");
    } else {
        printf("Wrong marks.");
    }
    return 0;
}

*/

/*
Practice Qs10 - WAP to give grades to a student marks<30 is C, 30<=marks<70 is B, 70<=marks<90 is A, 90<=marks<=100 is A+.

#include<stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d", &marks);
    if (marks<30) {
        printf("C \n");
    } else if (marks>=30 && marks<70) {
        printf("B \n");
    } else if (marks>=70 && marks<90) {
        printf("A \n");
    } else {
        printf("A+ \n");
    }
    return 0;
}
*/

/*
Practice Qs11-
Will this code:
int x=2;
if (x=1) {
    printf("x is equal to 1");
} else {
    printf("x is not equal to 1");
}
a. give error, b.print "x is equal to 1", c.print "x is not equal to 1".

error: there should == instead of =.
*/

/*
Practice Qs12 - WAP to find if a character entered by user is upper case or not.
#include<stdio.h>
int main() {
    char ch;
    printf("enter character: ");
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z') {
        print("upper case \n");
    } else if (ch>='a' && ch<='z') {
        printf("lower case \n");
    } else {
        printf("not an english letter");
    }
    return 0;
}
*/

/*
Homework Set Qs1 - WAP to check if a given number is Armstrong number or not. (Search what is Armstrong number)
#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, result = 0;
    int n = countDigits(num);

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1; // True: number is Armstrong
    else
        return 0; // False: number is not Armstrong
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


*/

/*
Qs2 - WAP to check if the given number is a natural number. (Natural numbers start from 1)
#include <stdio.h>

// Function to check if the number is a natural number
int isNaturalNumber(int num) {
    if (num >= 1)
        return 1; // True: number is a natural number
    else
        return 0; // False: number is not a natural number
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isNaturalNumber(num))
        printf("%d is a natural number.\n", num);
    else
        printf("%d is not a natural number.\n", num);

    return 0;
}

*/

