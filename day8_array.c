#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int numbers[MAX_SIZE];
    int length;
    //int number;
    printf("Nhap so luong phan tu muon them: ");
    scanf("%d", &length);
    if (length > MAX_SIZE || length <= 0) {
        printf("KHONG HOP LE!!!");
        return 0;
    }
    for (int i = 0; i < length; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, numbers[i]);
    }
    return 0;
}

// Created by ACER on 05/05/2026.
//
