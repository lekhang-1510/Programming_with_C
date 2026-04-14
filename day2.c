#include <stdio.h>
/*
int main() {
    //type variableName = value;
    int a = 10;
    int b = 20;

    printf("dia chi cua bien a la: %p", &a);
    printf("\ndia chi cua bien b la: %p", &b);
    //printf("a = %d  \nb = %d\n", a, b);

    return 0;
}*/

#include <stdio.h>


/*BAI TAP:
1. Tạo một chương trình C:
- Tạo các biến lưu trữ sau:
+ Điểm toán
+ Điểm lý
+ Điểm văn
+ Năm sinh
+ Ngân sách:
+ Điểm trung bình
+ Chuyển đổi giữa tiền Việt và tiền Đô la (Làm tròn 2 chữ số)
*/

int main() {
    float diem_toan = 7.8f;
    float diem_ly = 8.3f;
    float diem_van = 6.5f;
    int nam_sinh = 2001;
    int ngan_sach = 15000000;
    float diem_trung_binh;
    float tien_do;

    printf("\nDiem toan: %.1f diem", diem_toan);
    printf("\nDiem ly: %.1f diem", diem_ly);
    printf("\nDiem van: %.1f diem", diem_van);
    printf("\nNam sinh cua ban: %d", nam_sinh);
    printf("\nNgan sach cua ban: %d VND", ngan_sach);

    diem_trung_binh = (diem_toan + diem_ly + diem_van) / 3;
    printf("\nDiem trung binh: %.2f diem", diem_trung_binh);

    printf("\n\nDia chi cua bien diem_van: %p", &diem_van);
    printf("\nDia chi cua bien diem_ly: %p", &diem_ly);
    printf("\nDia chi cua bien diem_van: %p", &diem_van);
    printf("\nDia chi cua bien nam_sinh: %p", &nam_sinh);
    printf("\nDia chi cua bien ngan_sach: %p", &ngan_sach);
    printf("\nDia chi cua bien diem_trung_binh: %p", &diem_trung_binh);

    tien_do = ngan_sach / 26.388;
    printf("\n\nNgan sach cua ban %d(vnd) = %.2f (do)", ngan_sach, tien_do);
    return 0;
}
