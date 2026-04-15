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

//NGÀY 15/11/2026 - BAITAPTULAM
/*BÀI TẬP 3: Viết chương trình C giải phương trình bậc 2: ax^2 +bx +c = 0
 * - Yêu cầu:
 *    + Nhập 3 số thực a, b, c
 *    + Xử lí đầy đủ các trường hợp:
 *         > a = 0 --> phương trình bậc 1
 *         > delta < 0 --> vô nghiệm
 *         > delta = 0 --> nghiêm kép x1 = x2
 *         > delta > 0 --> 2 nghiệm phân biệt
 * In nghiệm ra màn hình (làm tròn 2 số nếu cần)
 * GỢI Ý:
 * Công thức:
 *                       delta = b^2 - 4a*c
 *   - Nếu delta > 0:
 *       x1 = (-b + sqrt(delta))/2*a
 *       x2 = (-b - sqrt(delta))/2*a
 *   - Nếu delta = 0:
 *       x1 = x2 = -b/2*a
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    //Khai báo các biến
    float a, b, c, x1, x2, delta;

    //Nhập các biến a,b,c
    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0 ");
    printf("\nNhap vao a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    //Xử lí & In kết quả
    delta = pow(b, 2) - 4 * a * c;

    if (a == 0) {
        //Phương trình bậc 1
        if (b == 0 && c == 0) {
            //printf("Phuong trinh bac 1: bx +c = 0");
            printf("Phuong trinh bac 1: %.2fx + %.2f = 0", b, c);
            printf("\nPhuong trinh vo so nghiem! ");
        } else if (b == 0) {
            printf("Phuong trinh bac 1: %.2fx + %.2f = 0", b, c);
            printf("\nPhuong trinh vo nghiem! ");
        } else {
            x1 = -c / b;
            printf("Phuong trinh bac 1: %.2fx + %.2f = 0", b, c);
            printf("\nPhuong trinh co 1 nghiem: \nx = %.2f", x1);
        }
    } else //a!=0
    {
        if (delta < 0) {
            printf("Phuong trinh vo nghiem ");
        } else if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Phuong trinh co 2 nghiem: \nx1 = %.2f,\nx2 = %.2f", x1, x2);
        } else // delta == 0
        {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: \nx1 = x2 = %.2f", x1);
        }
    }
    return 0;
}
