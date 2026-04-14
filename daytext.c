/*BÀI TẬP 1: Nhập r - Tính diện tích + Chu vi hình tròn
#include <stdio.h>
#define PI 3.14159265358979323846
#include <math.h>

int main() {
    float dien_tich, chu_vi, r;

    //Nhập dữ liệu
    printf("Nhap vao ban kinh: ");
    scanf("%f", &r);

    //Xử lí dữ liệu
    dien_tich = PI * pow(r, 2);
    printf("\nDien tinh hinh tron voi r = %.2f la: %.2f", r, dien_tich);

    chu_vi = 2 * PI * r;
    printf("\nChu vi hinh tron voi r = %.2f la: %.2f", r, chu_vi);
}*/

/*
#include <stdio.h>

int main() {
    float averageScore;

    //Nhập dữ liệu
    printf("Nhap diem trung binh cua HS: ");
    scanf("%f", &averageScore);

    //Xử lí + Xuất dữ liệu theo điều kiện tương ứng
    if (averageScore >= 8) {
        printf("Hoc sinh gioi (%.1f)", averageScore);
    } else if (averageScore >= 6.5 && averageScore < 8) {
        printf("Hoc sinh kha (%.1f)", averageScore);
    } else if (averageScore >= 5 && averageScore < 6.5) {
        printf("Hoc sinh trung binh (%.1f)", averageScore);
    } else {
        printf("Hoc sinh yeu (%.1f)", averageScore);
    }
    return 0;
}*/


/*#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        printf("\n\nBang cuu chung %d", i);
        for (int j = 1; j <= 10; j++) {
            printf("\n%d x %d = %d", i, j, i * j);
        }
    }
    return 0;
}*/


