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
    float diemToan = 7.8f;
    float diemLy = 8.3f;
    float diemVan = 6.5f;
    int namSinh = 2001;
    int nganSach = 15000000;
    float diemTrungBinh;
    float tienDo;

    printf("\nDiem toan: %.1f diem", diemToan);
    printf("\nDiem ly: %.1f diem", diemLy);
    printf("\nDiem van: %.1f diem", diemVan);
    printf("\nNam sinh cua ban: %d (%d tuoi)", namSinh, 2026 - namSinh);
    printf("\nNgan sach cua ban: %dVND", nganSach);

    //Tính điểm trung bình & in ra điểm trung binh
    diemTrungBinh = (diemToan + diemLy + diemVan) / 3;
    printf("\nDiem trung binh: %.2f diem", diemTrungBinh);

    //In ra địa chỉ của các biến
    printf("\n\n============ Dia chi cac bien ============");
    printf("\nDia chi cua bien diemToan: %p", &diemToan);
    printf("\nDia chi cua bien diemLy: %p", &diemLy);
    printf("\nDia chi cua bien diemVan: %p", &diemVan);
    printf("\nDia chi cua bien namSinh: %p", &namSinh);
    printf("\nDia chi cua bien nganSach: %p", &nganSach);
    printf("\nDia chi cua bien diemTrungBinh: %p", &diemTrungBinh);

    tienDo = nganSach / 26388.0;
    printf("\n\nNgan sach cua ban %d(VND) = %.2f(USD)", nganSach, tienDo);
    return 0;
}
