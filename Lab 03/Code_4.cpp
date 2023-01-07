#include <stdio.h>

// Define a struct for a student
struct student {
    char *name;
    int age;
};

// Function that takes a student by reference
void print_student(struct student *s) {
    printf("Student name: %s\n", s->name);
    printf("Student age: %d\n", s->age);
}

int main(void) {
    // Create a student
    struct student s = {"Sarayut{MORK}", 18};

    // Call the function to print the student's information
    print_student(&s);

    return 0;
}