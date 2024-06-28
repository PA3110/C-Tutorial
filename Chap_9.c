// Structures - a collection of values of different data types
// Example - For a student store the following: name(String), roll no(Integer), cgpa(Float)

/*
Syntax - 
struct student {
    char name[100];
    int roll;
    float cgpa;
};
struct student s1;
s1.cgpa=7.5;

structures are stored in contiguous memory locations

Benefits of using Structures - Saves us from creating too many variables.     Good data management/organization.
*/

/*
Array of Structures - 
struct student ECE[100];
struct student COE[100];
struct student IT[100];
ACCESS
IT[0].roll = 200;
IT[0].cgpa = 7.6;
*/

/*
Structures - 
# include <stdio.h>
# include <string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;
void printInfo(struct student s1);
int main() {
    struct student s1;
    // s1.name = "Shradha"; // not a modifiable value
    strcpy(s1.name,"Shradha");
    s1.roll = 64;
    s1.cgpa = 9.2;
    printf("student info : \n");
    printf("name = %s\n", s1.name);
    printf("roll no = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);

    //array of structures
    struct student IT[60];
    struct student COE[60];
    struct student ECE[60];
    //declaration
    struct student s2 = {"Rajat", 1552, 8.6};
    struct student s3 = {0};
    printf("roll no of s2 = %d\n", s2.roll);
    printf("roll no of s3 = %d\n", s3.roll);
    //pointer to structure
    struct student *ptr = &s1;
    printf("student.name = %s\n", (*ptr).name);
    printf("student.roll = %d\n", (*ptr).roll);
    printf("student.cgpa = %f\n", (*ptr).cgpa);
    //arrow operator
    printf("student->name = %s\n", ptr->name);
    printf("student->roll = %d\n", ptr->roll);
    printf("student->cgpa = %f\n", ptr->cgpa);
    //Passing structure to function
    printInfo(s1);
    //typedef keyword
    coe student1;
    student1.roll = 1664;
    student1.cgpa = 6.7;
    strcpy(student1.name, "sudhir");
    return 0;
}
void printInfo(struct student s1) {
    printf("student info : \n");
    printf("name = %s\n", s1.name);
    printf("roll no = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);
    //change
    s1.roll = 1660; //but it won't be reflected to the main function

    //as structures are passed by value
*/

/*
Initializing Structures - 
struct student s1 = { "shradha", 1664, 7.9};
struct student s2 = { "rajat", 1552, 8.3};
struct student s3 = { 0 };
*/

/*
Pointers to Structures - 
struct student s1;
struct student *ptr;
ptr =&s1;
*/

/*
Some more Qs - 
# include <stdio.h>
# include <string.h>
//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu ;
typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
struct vector {
    int x;
    int y;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);
struct complex {
    int real;
    int img;
};
typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc ;
int main() {
    acc acc1 = {123, "shradha"};
    acc acc2 = {124, "rajat"};
    acc acc3 = {125, "sudhir"};
    printf("acc no = %d", acc1.accountNo);
    printf("name = %s", acc1.name);
    return 0;
}
void calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}
*/

/*
Practice Qs55 - WAP to store the data of 3 students.
# include<stdio.h>
# include<string.h>
// user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
}
int main() {
    struct student s1;
    s1.roll=1664;
    s1.cgpa=9.2;
    //s1.name="shradha";
    strcpy(s1.name, "shradha");
    printf("student name= %s\n", s1.name);
    printf("student roll no= %d\n", s1.roll);
    printf("student cgpa= %f\n", s1.cgpa);

    struct student s2;
    s2.roll=1660;
    s2.cgpa=9.0;
    //s1.name="shradha";
    strcpy(s2.name, "shradha");
    printf("student name= %s\n", s2.name);
    printf("student roll no= %d\n", s2.roll);
    printf("student cgpa= %f\n", s2.cgpa);

    struct student s3;
    s3.roll=1668;
    s3.cgpa=9.5;
    //s1.name="shradha";
    strcpy(s3.name, "shradha");
    printf("student name= %s\n", s3.name);
    printf("student roll no= %d\n", s3.roll);
    printf("student cgpa= %f\n", s3.cgpa);

    return 0;
}
*/

/*
Practice Qs56 - Enter address(house no, block, city, state) of 5 people.
typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
int main() {
    struct addrees adds[5];
    // input
    printf("enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    
    printf("enter info for person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("enter info for person 3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("enter info for person 4: ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("enter info for person 5: ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

}

*/

/*
Practice Qs57 - Create a structure to store vectors. Then make a fucntion to return sum of 2 vectors.
struct vector {
    int x;
    int y;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main() {
    struct vector v1={5, 10};
    struct vector v2={3, 7};
    struct vector sum={0};
    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}
*/

/*
Practice Qs58 - Create a structure to store complex numbers. (use arrow operator)
struct complex {
    int real;
    int img;
};
int main() {
    struct complex num1={5,8};
    struct complex *ptr=&num1;
    printf("real part= %d\n", ptr-->real);
    printf("img part= %d\n", ptr-->img);
    return 0;
}
*/

/*
Practice Qs59 - You have to store the marks of 30 students in class. What will you use?
a. array of 10 floats(ans)      b. structure
*/

/*
Practice Qs60 - Make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.
typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc ;
int main() {
    acc acc1 = {123, "shradha"};
    acc acc2 = {124, "rajat"};
    acc acc3 = {125, "sudhir"};
    printf("acc no = %d", acc1.accountNo);
    printf("name = %s", acc1.name);
    return 0;
}
*/

/*
Homework Set Qs1 - Make a system that can store information of all students, teachers & staff of your college in the form of structures.
#include <stdio.h>
#include <string.h>

// Define structure for Students
struct Student {
    int id;
    char name[50];
    int age;
    char department[50];
};

// Define structure for Teachers
struct Teacher {
    int id;
    char name[50];
    int age;
    char subject[50];
};

// Define structure for Staff
struct Staff {
    int id;
    char name[50];
    int age;
    char position[50];
};

// Function to input Student details
void inputStudent(struct Student *student) {
    printf("Enter Student ID: ");
    scanf("%d", &student->id);
    getchar(); // To consume newline character
    printf("Enter Student Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0'; // Remove newline character
    printf("Enter Student Age: ");
    scanf("%d", &student->age);
    getchar(); // To consume newline character
    printf("Enter Student Department: ");
    fgets(student->department, sizeof(student->department), stdin);
    student->department[strcspn(student->department, "\n")] = '\0'; // Remove newline character
}

// Function to input Teacher details
void inputTeacher(struct Teacher *teacher) {
    printf("Enter Teacher ID: ");
    scanf("%d", &teacher->id);
    getchar(); // To consume newline character
    printf("Enter Teacher Name: ");
    fgets(teacher->name, sizeof(teacher->name), stdin);
    teacher->name[strcspn(teacher->name, "\n")] = '\0'; // Remove newline character
    printf("Enter Teacher Age: ");
    scanf("%d", &teacher->age);
    getchar(); // To consume newline character
    printf("Enter Teacher Subject: ");
    fgets(teacher->subject, sizeof(teacher->subject), stdin);
    teacher->subject[strcspn(teacher->subject, "\n")] = '\0'; // Remove newline character
}

// Function to input Staff details
void inputStaff(struct Staff *staff) {
    printf("Enter Staff ID: ");
    scanf("%d", &staff->id);
    getchar(); // To consume newline character
    printf("Enter Staff Name: ");
    fgets(staff->name, sizeof(staff->name), stdin);
    staff->name[strcspn(staff->name, "\n")] = '\0'; // Remove newline character
    printf("Enter Staff Age: ");
    scanf("%d", &staff->age);
    getchar(); // To consume newline character
    printf("Enter Staff Position: ");
    fgets(staff->position, sizeof(staff->position), stdin);
    staff->position[strcspn(staff->position, "\n")] = '\0'; // Remove newline character
}

// Function to print Student details
void printStudent(struct Student student) {
    printf("\nStudent ID: %d\n", student.id);
    printf("Student Name: %s\n", student.name);
    printf("Student Age: %d\n", student.age);
    printf("Student Department: %s\n", student.department);
}

// Function to print Teacher details
void printTeacher(struct Teacher teacher) {
    printf("\nTeacher ID: %d\n", teacher.id);
    printf("Teacher Name: %s\n", teacher.name);
    printf("Teacher Age: %d\n", teacher.age);
    printf("Teacher Subject: %s\n", teacher.subject);
}

// Function to print Staff details
void printStaff(struct Staff staff) {
    printf("\nStaff ID: %d\n", staff.id);
    printf("Staff Name: %s\n", staff.name);
    printf("Staff Age: %d\n", staff.age);
    printf("Staff Position: %s\n", staff.position);
}

int main() {
    struct Student students[100];
    struct Teacher teachers[100];
    struct Staff staffMembers[100];

    int studentCount = 0;
    int teacherCount = 0;
    int staffCount = 0;

    int choice;
    while (1) {
        printf("\nCollege Information System\n");
        printf("1. Add Student\n");
        printf("2. Add Teacher\n");
        printf("3. Add Staff\n");
        printf("4. Display Students\n");
        printf("5. Display Teachers\n");
        printf("

*/

/*
Homework Set Qs2 - You can also make this into a C Project with other functionalities like cgpa calculation of students, storing attendance etc.
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_TEACHERS 100
#define MAX_STAFF 100

// Define structure for Students
struct Student {
    int id;
    char name[50];
    int age;
    char department[50];
    float cgpa;
    int attendance;
};

// Define structure for Teachers
struct Teacher {
    int id;
    char name[50];
    int age;
    char subject[50];
};

// Define structure for Staff
struct Staff {
    int id;
    char name[50];
    int age;
    char position[50];
};

// Function to input Student details
void inputStudent(struct Student *student) {
    printf("Enter Student ID: ");
    scanf("%d", &student->id);
    getchar(); // To consume newline character
    printf("Enter Student Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0'; // Remove newline character
    printf("Enter Student Age: ");
    scanf("%d", &student->age);
    getchar(); // To consume newline character
    printf("Enter Student Department: ");
    fgets(student->department, sizeof(student->department), stdin);
    student->department[strcspn(student->department, "\n")] = '\0'; // Remove newline character
    printf("Enter Student CGPA: ");
    scanf("%f", &student->cgpa);
    printf("Enter Student Attendance (percentage): ");
    scanf("%d", &student->attendance);
}

// Function to input Teacher details
void inputTeacher(struct Teacher *teacher) {
    printf("Enter Teacher ID: ");
    scanf("%d", &teacher->id);
    getchar(); // To consume newline character
    printf("Enter Teacher Name: ");
    fgets(teacher->name, sizeof(teacher->name), stdin);
    teacher->name[strcspn(teacher->name, "\n")] = '\0'; // Remove newline character
    printf("Enter Teacher Age: ");
    scanf("%d", &teacher->age);
    getchar(); // To consume newline character
    printf("Enter Teacher Subject: ");
    fgets(teacher->subject, sizeof(teacher->subject), stdin);
    teacher->subject[strcspn(teacher->subject, "\n")] = '\0'; // Remove newline character
}

// Function to input Staff details
void inputStaff(struct Staff *staff) {
    printf("Enter Staff ID: ");
    scanf("%d", &staff->id);
    getchar(); // To consume newline character
    printf("Enter Staff Name: ");
    fgets(staff->name, sizeof(staff->name), stdin);
    staff->name[strcspn(staff->name, "\n")] = '\0'; // Remove newline character
    printf("Enter Staff Age: ");
    scanf("%d", &staff->age);
    getchar(); // To consume newline character
    printf("Enter Staff Position: ");
    fgets(staff->position, sizeof(staff->position), stdin);
    staff->position[strcspn(staff->position, "\n")] = '\0'; // Remove newline character
}

// Function to print Student details
void printStudent(struct Student student) {
    printf("\nStudent ID: %d\n", student.id);
    printf("Student Name: %s\n", student.name);
    printf("Student Age: %d\n", student.age);
    printf("Student Department: %s\n", student.department);
    printf("Student CGPA: %.2f\n", student.cgpa);
    printf("Student Attendance: %d%%\n", student.attendance);
}

// Function to print Teacher details
void printTeacher(struct Teacher teacher) {
    printf("\nTeacher ID: %d\n", teacher.id);
    printf("Teacher Name: %s\n", teacher.name);
    printf("Teacher Age: %d\n", teacher.age);
    printf("Teacher Subject: %s\n", teacher.subject);
}

// Function to print Staff details
void printStaff(struct Staff staff) {
    printf("\nStaff ID: %d\n", staff.id);
    printf("Staff Name: %s\n", staff.name);
    printf("Staff Age: %d\n", staff.age);
    printf("Staff Position: %s\n", staff.position);
}

int main() {
    struct Student students[MAX_STUDENTS];
    struct Teacher teachers[MAX_TEACHERS];
    struct Staff staffMembers[MAX_STAFF];

    int studentCount = 0;
    int teacherCount = 0;
    int staffCount = 0;

    int choice;
    while (1) {
        printf("\nCollege Information System\n");
        printf("1. Add Student\n");
        printf("2. Add Teacher\n");
        printf("3. Add Staff\n");
        printf("4. Display Students\n");
        printf("5. Display Teachers\n");
        printf("6. Display Staff\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline character

        switch (choice) {
            case 1:
                if (studentCount < MAX_STUDENTS) {
                    inputStudent(&students[studentCount++]);
                } else {
                    printf("Student list is full!\n");
                }
                break;
            case 2:
                if (teacherCount < MAX_TEACHERS) {
                    inputTeacher(&teachers[teacherCount++]);
                } else {
                    printf("Teacher list is full!\n");
                }
                break;
            case 3:
                if (staffCount < MAX_STAFF) {
                    inputStaff(&staffMembers[staffCount++]);
                } else {
                    printf("Staff list is full!\n");
                }
                break;
            case 4:
                for (int i = 0; i < studentCount; i++) {
                    printStudent(students[i]);
                }
                break;
            case 5:
                for (int i = 0; i < teacherCount; i++) {
                    printTeacher(teachers[i]);
                }
                break;
            case 6:
                for (int i = 0; i < staffCount; i++) {
                    printStaff(staffMembers[i]);
                }
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

*/


