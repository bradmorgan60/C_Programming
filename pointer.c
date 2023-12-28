#include <stdio.h>
#include <stdlib.h>
// a pointer is a memory address, a type of data

int main() {

    int age = 30; //0x7ffee306861c
    int * ptr_age = &age;
    double gpa = 3.8;
    double * ptr_gpa = &gpa;
    char grade = 'A';
    char * ptr_grade = &grade;

    printf("Age's memory address is %p\n", &age);
}