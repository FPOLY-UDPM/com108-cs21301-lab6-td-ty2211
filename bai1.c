/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Danh]
 * MSSV:      [PS48014]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>

int main() {
    int n;
    int a[100];
    int sum = 0, count = 0;
    float average;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        if(a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }

    if(count > 0) {
        average = (float)sum / count;
        printf("Trung binh cac so chia het cho 3 la: %.2f", average);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang");
    }

    return 0;
}


