#include <stdio.h>

int main() {
    int numbers[10];
    int number;
    printf("Nhap so luong phan tu muon them vao numbers: ");
    scanf("%d", &number);
    if (number > 10) {
        printf("Vuot qua do dai mang numbers !!!");
    }
    for (int i = 0; i < number; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d:", &numbers[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, numbers[i]);
    }
    return 0;
}

// Created by ACER on 05/05/2026.
//
