/*Viết chương trình nhập vào một số nguyên
 * Kiểm tra xem số người dùng nhập vào là số chẵn hay số lẻ
 * Nếu là số 0 thì in ra không chẵn không lẽ
 */

/*
 *CÁCH 1:
#include <stdio.h>

int main() {
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("The number %d is neither an even nor an odd number.", number);
    } else {
        if (number % 2 == 0) {
            printf("The number %d is an even number.", number);
        } else {
            printf("The number %d is an odd number.", number);
        }
    }
    return 0;
}*/

//CÁCH 2: Dùng if - else if - else
#include <stdio.h>

int main() {
    int number;

    printf("Enter your number: ");
    scanf("%d", number);

    if (number == 0) {
        printf("The number %d is neither an even nor an odd number.", number);
    } else if (number % 2 == 0) {
        printf("The number %d is an even number.", number);
    } else {
        printf("The number %d is an odd number.", number);
    }
    return 0;
}

//
// Created by ACER on 23/04/2026.
//
