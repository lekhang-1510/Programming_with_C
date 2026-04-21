//Thực hành 1: Lắp ráp khung hồ sơ cá nhân
/*
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
}*/

/*Cho phép người dùng nhập vào
1, Họ và tên
2, Giới tính ()
3, Ngày tháng năm sinh
4, Tuổi
5, Tình trạng hôn nhân
6, Quê quán
7, Tài chính
8, Chiều cao
9, Cân nặng */
#include <stdio.h>

int main() {
    char fullName[50];
    char gender[50];
    int day, month, year, age, finance;
    char maritalStatus;
    char homeTown[50];
    float height, weight;

    printf("Nhap vao fullName: ");
    scanf("%s", &fullName);

    printf("Nhap vao gender: ");
    scanf("%s", &gender);

    printf("Nhap vao day,month,year: ");
    scanf("%d%d%d", &day, &month, &year);

    printf("Nhap vao age: ");
    scanf("%d", &age);

    printf("Nhap vao maritalStatus: ");
    maritalStatus = getchar();

    printf("Nhap vao homeTown: ");
    scanf("%s", &homeTown);
 printf("Nhap vao finance: ");
    scanf("%d", &finance);

    printf("Nhap vao height: ");
    scanf("%f", &height);

    printf("Nhap vao weight: ");
    scanf("%f", &weight);

    printf("%s\n", fullName);
    printf("%s\n", gender);
    printf("%d\\%d\\%d\n", day, month, year);
    printf("%d\n", age);
    putchar(maritalStatus);
    printf("%s\n", homeTown);
    printf("%d\n", finance);
    printf("%.2f\n", height);
    printf("%.2f", weight);
}

//
// Created by ACER on 18/04/2026.
//
