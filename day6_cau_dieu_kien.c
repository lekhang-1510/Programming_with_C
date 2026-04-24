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
}

//CÁCH 2: Dùng if - else if - else
#include <stdio.h>

int main() {
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The number %d is neither an even nor an odd number.", number);
    } else if (number % 2 == 0) {
        printf("The number %d is an even number.", number);
    } else {
        printf("The number %d is an odd number.", number);
    }
    return 0;
}*/


/*BÀI TẬP VỀ NHÀ : Làm lại bài phân khúc sinh viên (Xuất sắc, Giỏi, Khá, Trung bình, Yếu)
 *- Xuất sắc : >= 9
 *- Giỏi >=7 && < 9
 *- Khá >= 5 && < 7
 *- Trung bình >= 3 && < 5
 *- Yếu < 3
 *  YÊU CẦU:
 *  1. Làm lại bài
 *  2. Sửa lại (refactor) các trường hợp đặt biệt và trường hợp biên
 *  3. Viết lại theo hướng khác (score < )
 */

#include <stdio.h>

int main() {
    float score;
    printf("Enter your score (0-10): ");
    scanf("%f", &score);

    if (score < 0 || score > 10) //Khi điểm nhập không hợp lệ:
    {
        printf("Invalid score! Please enter a value between 0 and 10 !!! ");
    } //Khi điểm nhập hợp lệ: 0 -- 10
    else {
        if (score < 3) {
            printf("Academic Ranking: \"Poor\" ");
        } else if (score < 5) {
            printf("Academic Ranking: \"Average\" ");
        } else if (score < 7) {
            printf("Academic Ranking: \"Good\" ");
        } else if (score < 9) {
            printf("Academic Ranking: \"Very Good\" ");
        } else {
            printf("Academic Ranking: \"Excellent\" ");
        }
    }
    return 0;
}


//
// Created by ACER on 23/04/2026.
//
