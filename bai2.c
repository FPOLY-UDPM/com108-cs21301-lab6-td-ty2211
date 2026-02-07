/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Danh]
 * MSSV:      [PS48014]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

#include <stdio.h>

int main() {
    int n;
    int a[100];
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }

        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("Gia tri lon nhat (Max) = %d\n", max);
    printf("Gia tri nho nhat (Min) = %d\n", min);

    return 0;
}


