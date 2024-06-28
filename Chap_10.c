// File - container in a storage device to store data     RAM -->  <--  HardDisk
/*
- RAM is volatile.
- Contents are lost when program terminates
- Files are used to persist the data
*/

/*
Operation on Files - 
Create a File, Open a File, Close, Read, Write
*/

/*
Types of File - 
Text Files - textual data(.txt, .c)
Binary Files - binary data(.exe, .mp3, .jpg)
*/

/*
File Pointer - FILE is a (hidden) structure that needs to be created for opening a file. 
A FILE ptr that points to this structure & is used to access the file.
FILE *fptr;
*/

/*
Opening a File - 
FILE *fptr;
fptr = fopen("filename", mode);

Closing a File - 
fclose(fptr);

File Opening Modes - 
"r" - open to read
"rb" - open to read in binary
"w" - open to write
"wb" - open to write in binary
"a" - open to append
*/

/*
BEST Practice - Check if a file exists before reading from it.
*/

/*
Reading from a file - 
char ch;
fscanf(fptr, "%c", &ch);

Writing to a file - 
char ch = 'A';
fprintf(fptr, "%c", ch);

Read & Write a char - 
fgetc(fptr)
fputc( 'A', fptr)

EOF (End Of File) - 
fgetc returns EOF to show that the file has ended

*/

/*
Codes - 
# include <stdio.h>
int main() {
    FILE *fptr;
    //Reading a file
    char ch;
    fptr = fopen("Test.txt", "r");
    if(fptr == NULL) {
        printf("doesn't exist!\n");
    } else {
        fscanf(fptr, "%c", &ch);
        printf("character in file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("character in file is : %c\n", ch);
        fclose(fptr);
    }
    //Writing in a file
    ch = 'M';
    fptr = fopen("NewFile.txt", "w");
    fprintf(fptr, "%cANGO", ch);
    fclose(fptr);
    //fgets
    fptr = fopen("NewFile.txt", "r");
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    fclose(fptr);
    //fputc
    fptr = fopen("NewFile.txt", "w");
    fputc('a', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);
    fclose(fptr);
    //read the full file (EOF)
    fptr = fopen("NewFile.txt", "r");
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
*/

/*
Practice Qs61 - Make a program to read 5 integers from a file.
# include<stdio.h>
int main() {
    FILE *fptr;
    fptr=fopen("test.txt", "r");
    int n;
    fscan(fptr, "%d", n);
    printf("number = %d\n", n);
    fscan(fptr, "%d", n);
    printf("number = %d\n", n);
    fscan(fptr, "%d", n);
    printf("number = %d\n", n);
    fscan(fptr, "%d", n);
    printf("number = %d\n", n);
    fscan(fptr, "%d", n);
    printf("number = %d\n", n);
    fclose(ptr);
    return 0;
*/

/*
Practice Qs62 - Make a program to input student information from a user & enter it to a file.
# include<stdio.h>
int main() {
    FILE *fptr;
    fptr=fopen("Student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name: ");
    scanf("%s", &name);
    printf("enter age: ");
    scanf("%d", &age);
    printf("enter cgpa: ");
    scanf("%f", &cgpa);
    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

*/

/*
Practice Qs63 - WAP to write all the odd numbers from 1 to n in a file.
# include<stdio.h>
int main() {
    FILE *fptr;
    fptr=fopen("Odd.txt", "w");
    int n;
    printf();
    scanf();
    for (int i=1;i<=n;i++) {
        if (i%2!=0) {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);
    return 0;
}
*/

/*
Practice Qs64 - 2 numbers - a & b, are written in a file. WAP to replace them with their sum.
int main() {
    FILE *fptr;
    fptr=fopen("Sum.txt", "r");
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr=fopen("Sum.txt", "r");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    return 0;
}
*/

/*
Homework Set Qs1 - WAP to read a string from a file & output to the user.
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char buffer[256];

    // Prompt user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
    }

    // Read a string from the file
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Output the string to the user
        printf("Contents of the file: %s\n", buffer);
    } else {
        printf("Could not read from file %s.\n", filename);
    }

    // Close the file
    fclose(file);

    return 0;
}

*/

/*
Homework Set Qs2 - Replace the data in file of Q(a) with the number of vowels in the string.
#include <stdio.h>
#include <ctype.h>

// Function to count vowels in a string
int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    FILE *file;
    char filename[100];
    char buffer[256];
    int vowelCount;

    // Prompt user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
    }

    // Read a string from the file
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Count the number of vowels in the string
        vowelCount = countVowels(buffer);
    } else {
        printf("Could not read from file %s.\n", filename);
        fclose(file);
        return 1;
    }

    // Close the file after reading
    fclose(file);

    // Open the file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Could not open file %s for writing.\n", filename);
        return 1;
    }

    // Write the number of vowels to the file
    fprintf(file, "%d\n", vowelCount);

    // Close the file after writing
    fclose(file);

    printf("Number of vowels (%d) has been written to the file %s.\n", vowelCount, filename);

    return 0;
}

*/

/*
Homework Set Qs2 - Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file.
#include <stdio.h>

#define NUM_STUDENTS 5

// Define structure for Students
struct Student {
    char name[50];
    int marks;
    float cgpa;
    char course[50];
};

// Function to write student information to a file
void writeStudentsToFile(struct Student students[], int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Could not open file %s for writing.\n", filename);
        return;
    }

    // Write table header
    fprintf(file, "%-20s %-10s %-10s %-20s\n", "Name", "Marks", "CGPA", "Course");
    fprintf(file, "%-20s %-10s %-10s %-20s\n", "--------------------", "----------", "----------", "--------------------");

    // Write student information
    for (int i = 0; i < count; i++) {
        fprintf(file, "%-20s %-10d %-10.2f %-20s\n", students[i].name, students[i].marks, students[i].cgpa, students[i].course);
    }

    // Close the file
    fclose(file);
    printf("Student information has been written to the file %s.\n", filename);
}

int main() {
    struct Student students[NUM_STUDENTS] = {
        {"Alice Smith", 85, 3.7, "Computer Science"},
        {"Bob Johnson", 92, 3.9, "Mathematics"},
        {"Charlie Brown", 78, 3.2, "Physics"},
        {"Daisy Miller", 88, 3.8, "Chemistry"},
        {"Ethan Davis", 94, 4.0, "Engineering"}
    };

    const char *filename = "students.txt";

    // Write student information to file
    writeStudentsToFile(students, NUM_STUDENTS, filename);

    return 0;
}

*/