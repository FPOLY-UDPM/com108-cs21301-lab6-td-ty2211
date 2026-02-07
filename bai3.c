/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Danh]
 * MSSV:      [PS48014]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 


#include <stdio.h>

int main(){
    int n;
    int a[100];
    printf("Nhap so phan tu (<=100): ");
    scanf("%d", &n);
    if(n <= 0 || n > 100){
        printf("So phan tu khong hop le!");
        return 0;
    }
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){  
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep giam dan:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

