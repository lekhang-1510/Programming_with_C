#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;

    //Nhap du lieu
    printf("Nhap vao name: ");
    scanf("%s", &name);
    printf("Nhap vao age: ");
    scanf("%d", &age);

    printf("Nhap vao gpa: ");
    scanf("%f", &gpa);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
}

//
// Created by ACER on 18/04/2026.
//
