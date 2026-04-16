/*
#include <stdio.h>
int main() {
    //type variableName = value;
    int a = 10;
    int b = 20;

    printf("dia chi cua bien a la: %p", &a);
    printf("\ndia chi cua bien b la: %p", &b);
    //printf("a = %d  \nb = %d\n", a, b);

    return 0;
}*/


/*BAI TAP:
1. Tạo một chương trình C:
- Tạo các biến lưu trữ sau:
+ Điểm toán
+ Điểm lý
+ Điểm văn
+ Năm sinh
+ Ngân sách
+ Điểm trung bình
+ Chuyển đổi giữa tiền Việt và tiền Đô la (Làm tròn 2 chữ số)
*/

#include <stdio.h>

int main() {
    float mathScore = 7.8f;
    float physicsScore = 8.3f;
    float literatureScore = 6.5f;
    unsigned short birthYear = 2001;
    unsigned short budget = 15000000;
    float averageScore;
    float budgetUSD;

    printf("\nDiem toan: %.1f diem", mathScore);
    printf("\nDiem ly: %.1f diem", physicsScore);
    printf("\nDiem van: %.1f diem", literatureScore);
    printf("\nNam sinh cua ban: %d (%d tuoi)", birthYear, 2026 - birthYear);
    printf("\nNgan sach cua ban: %dVND", budget);

    //Tính điểm trung bình & in ra điểm trung binh
    averageScore = (mathScore + physicsScore + literatureScore) / 3;
    printf("\nDiem trung binh: %.2f diem", averageScore);

    //In ra địa chỉ của các biến
    printf("\n\n============ Dia chi cac bien ============");
    printf("\nDia chi cua bien diemToan: %p", &mathScore);
    printf("\nDia chi cua bien diemLy: %p", &physicsScore);
    printf("\nDia chi cua bien diemVan: %p", &literatureScore);
    printf("\nDia chi cua bien namSinh: %p", &birthYear);
    printf("\nDia chi cua bien nganSach: %p", &budget);
    printf("\nDia chi cua bien diemTrungBinh: %p", &averageScore);

    budgetUSD = budget / 26388.0;
    printf("\n\nNgan sach cua ban %d(VND) = %.2f(USD)", budget, budgetUSD);
    return 0;
} //Update 15/4/2026
