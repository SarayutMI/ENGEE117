#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    float grade;
};

int main(void) {
    struct student s1;
    strcpy(s1.name, "John");
    s1.age = 20;
    s1.grade = 80.5;
    printf("Student name: %s\n", s1.name);
    printf("Student age: %d\n", s1.age);
    printf("Student grade: %.2f\n", s1.grade);

    return 0;
}