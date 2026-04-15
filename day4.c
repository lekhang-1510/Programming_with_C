#include <stdio.h>

int main() {
    //Khai báo
    int a;
    int sum = 0;

    //Nhập dữ liêu
    printf("Tinh tong tu 1 --> a ");
    printf("\nNhap vao a: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        printf("\n%d + %d = %d", sum, i, sum + i);
        sum += i;
    }
    //In dữ liêu
    printf("\n------------------");
    printf("\nTong tu 1 --> %d = %d ", a, sum);
    return 0;
}

//Update
