/*
 * Tạo 1 mảng có độ dài là 10 và có sẵn 3 phần tử
 * Cho phép người dùng nhập vào số lượng phẩn tử muốn thêm
 * Thêm phần tử vào trong mảng
 */

#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int numbers[MAX_SIZE] = {1, 2, 3};
    int length;
    //int number;
    printf("Nhap so luong phan tu muon them: ");
    scanf("%d", &length);
    if (length + 3 > MAX_SIZE || length <= 0) {
        printf("KHONG HOP LE!!!");
        return 0;
    }
    for (int i = 3; i < length; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\n====== ARRAY NUMBERS ======\n");
    for (int i = 0; i < length; i++) {
        printf("||   Phan tu thu %d: %d  ||\n", i + 1, numbers[i]);
    }
    printf("===========================");
    return 0;
}

// Created by ACER on 05/05/2026.
//
