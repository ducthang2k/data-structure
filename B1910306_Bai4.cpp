/*  4. Viết chương trình nhập vào một mảng số tự nhiên. Hãy xuất ra màn hình:
- Dòng 1: Gồm các số lẻ, tổng cộng có bao nhiêu số lẻ.
- Dòng 2: Gồm các số chẵn, tổng cộng có bao nhiêu số chẵn.
- Dòng 3: Gồm các số nguyên tố, tổng cộng có bao nhiêu số nguyên tố.
- Dòng 4: Gồm các số không phải là số nguyên tố, tổng cộng có bao nhiêu số không nguyên tố. */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void NhapMang(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}


void InMang(int a[], int n){
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}


void Sole(int a[], int n){
    int dem;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 1){
            printf("%d ", a[i]);
            dem++;
        }
    printf("\tCo tong cong %d so le", dem);     
}

void Sochan(int a[], int n){
    int dem;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0){
            printf("%d ", a[i]);
            dem++;
        }
    printf("\tCo tong cong %d so chan", dem);     
}

void SoNguyenTo(int a[], int n){
    int dem = 0;
    for (int i = 0 ; i < n ; i++) {
        bool flag = true;
        if (a[i] < 2) 
            flag = false;
        for (int j = 2 ; j <= sqrt(a[i]) ; j++) {
            if (a[i] % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag == true){ 
            printf("%d ", a[i]);      dem++;  
        }
    }
    printf("\tCo tong cong %d so nguyen to", dem);
}


void SoKhongNguyenTo(int a[], int n){
    int dem = 0;
    for (int i = 0 ; i < n ; i++) {
        bool flag = true;
        if (a[i] < 2) 
            flag = false;
        for (int j = 2 ; j <= sqrt(a[i]) ; j++) {
            if (a[i] % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag == false){ 
            printf("%d ", a[i]);    dem++;
        }
    }
    printf("\tCo tong cong %d so khong phai la so nguyen to", dem);
}


int main(){
    int a[100], n;
    printf("Nhap vao so phan tu cua mang: ");     scanf("%d", &n);
    NhapMang(a, n);
    printf("Mang vua nhap la: ");
    InMang(a, n);
    printf("\nCac so le: ");  Sole(a, n);
    printf("\nCac so chan: ");  Sochan(a, n);
    printf("\nCac so nguyen to: "); SoNguyenTo(a, n);
    printf("\nCac so khong phai la so nguyen to: "); SoKhongNguyenTo(a, n);

}