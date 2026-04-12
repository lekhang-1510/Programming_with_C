#include <stdio.h>
int main() {
    int a,b;
    printf("Nhap vao a: ");
    scanf("%d", &a);
    printf("Nhap vao b: ");
    scanf("%d", &b);
    if (a>b) {
        printf("Min = %d",a);
        printf("\nMax = %d",b);
    }else {
        printf("Max = %d",b);
        printf("\nMin = %d",a);
    }return 0;
}