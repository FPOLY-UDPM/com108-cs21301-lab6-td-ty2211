/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Danh]
 * MSSV:      [PS48014]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

#include <stdio.h>

int main(){
    int n, m;
    int a[100][100];

    printf("Nhap so hang n: ");
    scanf("%d", &n);

    printf("Nhap so cot m: ");
    scanf("%d", &m);

    if(n <= 0 || m <= 0 || n > 100 || m > 100){
        printf("Kich thuoc khong hop le!");
        return 0;
    }
    printf("Nhap ma tran:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = a[i][j] * a[i][j];
        }
    }
    printf("\nMa tran sau khi binh phuong:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%5d", a[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

