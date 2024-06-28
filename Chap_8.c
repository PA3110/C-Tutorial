// Strings - A charcater array terminated by a '\0' (null character)
// null character denotes string termination
/*
EXAMPLE - char name[]={'S', 'H', 'R', 'A', 'D', 'H', 'A', ''\0};   char class[]={'A', 'P', 'N', 'A', '', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};
*/

/*
# include <stdio.h>
# include <string.h>

int main() {
    //declaration
    char name[] = "Shradha Khapra";
    char course[] = {'a','p', 'n', 'a', ' ', 'c', 'o', 'l', 'l', 'e', 'g', 'e', '\0'};
    //printing string
    for(int i=0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
    //printing string with pointer
    for(char *ptr=name; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");
    //printing using format specifier
    printf("%s\n", name);
    //input a string
    char firstName[40];
    printf("enter first name : ");
    scanf("%s", firstName);
    printf("you first name is %s\n", firstName);
    char fullName[40];
    printf("enter full name : ");
    scanf("%s", fullName);
    printf("you first name is %s\n", fullName);
    // gets & puts
    char fullName[40];
    printf("enter full name : ");
    fgets(fullName, 40, stdin);
    puts(fullName);
    //Library Functions
    char name[] = "Shradha";
    int length = strlen(name);
    printf("the length of name : %d\n", length);
    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);
    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);
    char str1[] = "Apple";
    char str2[] = "Banana"; 
    printf("%d\n", strcmp(str1, str2));
    //enter String using %c
    printf("enter string : ");
    char str[100];
    char ch;
    int i = 0;
    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}
*/

/*
What Happens in Memory? 
char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};
char name[ ] = "SHRADHA";
*/

/*
Practice  Qs47 - Create a string fristName & lastName to store details of user & print all the chracters using a loop.
# include<stdio.h>
void printString(char arr[]);
int main() {
    char firstName[]="Shradha";
    char lastName[]="Khapra;
    return 0;"
}
void printString(char arr[]) {
    for (int i=0; arr[i]1='\0' ;i++) {
        printf("%c", arr[i]);
    }
}
*/

/*
String Format Specifier ---> %s
char name[]="Shradha";
printf("%s", name);

IMPORTANT - scanf( ) cannot input multi-word strings with spaces.   Here, gets( ) & puts( ) come into picture.
*/

/*
Practice Qs48 - Ask the user to enter ther firstName & print it back to them. Also, try this with their fullname.
# include<stdio.h>
int main(){ 
    //char fristName[50];
    // scanf("%s", firstName);
    // printf("your name is %s", firstName);

    char fullName[100];
    scanf("%s", fullName);
    printf("your full name is: %s", fullName);
    return 0;
}

void printString() {
    for (int i=0;arr[i]!='\0';i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/

/*
String Functions - gets(str) ---> (Dangerous & outdated)input a string(even multiword),   puts(str) ---> output a string,   
fgets(str, n, file) ---> stops when n-1 chars input or new line is entered
*/

/*
String using Pointers - char *str="Hello World";  
Store string in memory & the assigned address is stored in the char pointer 'str'
char *str = "Hello World";    //can be reinitialized
char str[] = "Hello World";
// cannot be reinitialized
*/

/*
Practice Qs49 - Make a program that inputs user's name & prints its length.
# include<stdio.h>
void printString();
void countLength();
int main() {
    char name[100];
    fgets(name, 100, stdin);
    printf("length is: %d", countLength(name));
    return 0;
}
int countLength(char arr[]) {
    int count=0;
    for (int i=0;arr[i]!='\0';i++) {
        count++;
    }
    return count;
}
void printString() {
    for (int i=0;arr[i]!='\0';i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/

/*
Standard Library Functions - ----> <string.h>   
1 strlen(str) - count number of characters excluding '\0'
2 strcpy(newStr, oldStr) - copies value of old string to new string
3 strcat(firstStr, secStr) - concatenates first string with second string      //firstStr should be large enough
4 strcpm(firstStr, secStr) - compares 2 strings & returns a value
    0 --> string equal
    positive --> first > second(ASCII)      negative --> first < second(ASCII)
*/

/*
> Some more Qs
# include <stdio.h>
# include <string.h>
// void printString(char arr[]);
// int countLength(char arr[]);
// void salting(char password[]);
// void slice(char str[], int n, int m);
//int countVowels(char str[]);
void checkChar(char str[], char ch);
int main() {
    char str[] = "ApnaCollege";
    char ch = 'x';
    checkChar(str, ch);
}
void checkChar(char str[], char ch) {
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("character is present!");
            return;
        }
    }
    printf("character is NOT present:(");
}

// int countVowels(char str[]) {
//      int count = 0;
//      for(int i=0; str[i] != '\0'; i++) {
//          if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//              count++;
//          }
//      }
//      return count;
// }

// void slice(char str[], int n, int m) { // n & m are valid value
//      char newStr[100];
//      int j = 0;
//      for(int i=n; i<=m; i++, j++) {
//          newStr[j] = str[i];
//      }
//      newStr[j] = '\0';
//      puts(newStr);
// }

// void salting(char password[]) {
//      char salt[] = "123";
//      char newPass[200];
//      strcpy(newPass, password); // newPass = "test"
//      strcat(newPass, salt); // newPass = "test" + "123";
//      puts(newPass);
// }

// int countLength(char arr[]) {
//      int count = 0;
//      for(int i=0; arr[i]!='\0'; i++) {
//          count++;
//      }
//      return count-1;
// }
// void printString(char arr[]) {
//      for(int i=0; arr[i] != '\0' ;i++) {
//          printf("%c", arr[i]);
//      }
//      printf("\n");
// }
*/

/*
Practice Qs50 - Take a string input from the user using %c.
# include<stdio.h>
# include<string.h>
void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char str[100];
    char ch;
    int i=0;
    while (ch!='\n') {
        scanf("%c", ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    puts(str);
}

void printString(char arr[]) {
//      for(int i=0; arr[i] != '\0' ;i++) {
//          printf("%c", arr[i]);
//      }
//      printf("\n");
 }

// int countLength(char arr[]) {
//      int count = 0;
//      for(int i=0; arr[i]!='\0'; i++) {
//          count++;
//      }
//      return count-1;
// }
*/

/*
Practice Qs51 - Salting - Find the salted form of a password entered by user if the salt is "123" & added at the end.
# include<stdio.h>
# include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);

int main() {
    char password[100];
    scanf("%s", password);
    salting(password);
}

void salting(char password) {
    char salt[]="123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPas);
}

*/

/*
Practice Qs52 - WAF names slice, which takes a string & returns a sliced string from index m to n.
#include <stdio.h>
#include <string.h>
void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);
int main() {
    char str[]="HelloWorld";
    slice(str, 3, 6);
}
void slice(char str[], int n, int m) {
    char newStr[100];
    int j=0;
    for (int i=n;i<=m;i++;j++) {
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}

*/

/*
Practice Qs53 - WAF to count the occurrence of vowels in a string.
#include <stdio.h>
#include <string.h>

int countVowels(char str[]);
int main() {
    char str[]="HelloWorld";
    printf("vowels are: %d", countVowels(str));
}
int countVowels(char str[]) {
    int count=0;
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            count++;
        }
    }
    return count;
}
*/

/*
Practice Qs54 - Check if a given character is present in a string or not.
#include <stdio.h>
#include <string.h>
void checkChar(char str[], char ch);
int main() {
    char str[]="ApnaCollege";
    char ch='e';
    checkChar(str, ch);
}
void checkChar() {
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]==ch) {
            printf("character is present!");
            return;
        }
    }
    printf("character is not present!");
}
*/

/*
Homework Set Qs1 - WAP to convert all lowercase vowels to uppercase in a string.
#include <stdio.h>
#include <ctype.h>

void convertVowelsToUppercase(char *str) {
    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
            *str = toupper(*str);
        }
        str++;
    }
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase vowels to uppercase
    convertVowelsToUppercase(str);

    // Print the modified string
    printf("Modified string: %s", str);

    return 0;
}

*/

/*
Homework Set Qs2 - WAP to print the highest frequency character in a string.
#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

char getMaxFrequencyChar(char *str) {
    int count[ASCII_SIZE] = {0};  // Array to store frequency of each character
    int max = -1;  // Initialize max count
    char result;  // Initialize result

    // Calculate frequency of each character
    for (int i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the character with the highest frequency
    for (int i = 0; str[i]; i++) {
        if (max < count[(unsigned char)str[i]]) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Get the highest frequency character
    char maxFreqChar = getMaxFrequencyChar(str);

    // Print the highest frequency character
    printf("The highest frequency character is '%c'.\n", maxFreqChar);

    return 0;
}

*/

/*
Homework Set Qs3 - WAP to remove blank spaces in a string.
#include <stdio.h>

void removeSpaces(char *str) {
    int count = 0; // Initialize count of non-space characters

    // Traverse the given string. If a character is not a space,
    // then append it to the result.
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i]; // Here count is incremented
        }
    }
    str[count] = '\0'; // Terminate the modified string with a null character
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Remove spaces from the string
    removeSpaces(str);

    // Print the modified string
    printf("String after removing spaces: %s\n", str);

    return 0;
}

*/

/*
Homework Set Qs4 - WAP to replace lowercase letters with uppercase & vice versa in a string.
#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Toggle case of each character in the string
    toggleCase(str);

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

*/


