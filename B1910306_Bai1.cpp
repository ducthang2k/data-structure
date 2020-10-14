#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Hoso {
    char HoTen[40];
    float Diem;
    char Loai[10];
};

void Nhap(Hoso dshs[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap ho ten hoc sinh thu %d: ", i + 1); fflush(stdin);   gets(dshs[i].HoTen);
        printf("Nhap diem: ");  scanf("%f", &dshs[i].Diem);
    }
}

void In(Hoso dshs[], int n){
    printf("\n\tXEP LOAI VAN HOA\n");
    printf("HO VA TEN\t\tDIEM\tXEP LOAI");
    for (int i = 0; i < n; i++)
    {
        printf("\n%-20s\t%3.2f\t%-5s", dshs[i].HoTen, dshs[i].Diem, dshs[i].Loai);
    }
    
}

void XepLoai (Hoso dshs[],int n){
    for (int i = 0; i <n ; i++){
        if (dshs[i].Diem <= 10.0 && dshs[i].Diem >= 9.0)
            strcpy(dshs[i].Loai, "Xuat sac");
        else if (dshs[i].Diem >= 8.0 && dshs[i].Diem < 9.0)    
            strcpy(dshs[i].Loai, "Gioi");
        else if (dshs[i].Diem >= 7.0 && dshs[i].Diem < 8.0)
            strcpy(dshs[i].Loai, "Kha");
        else if (dshs[i].Diem >= 5.0 && dshs[i].Diem < 7.0)
            strcpy(dshs[i].Loai, "Trung binh");
        else if (dshs[i].Diem < 5.0 && dshs[i].Diem >= 0)
            strcpy(dshs[i].Loai, "Khong dat");
    }
}

void SapXep(Hoso dshs[], int n){
    Hoso temp;
	printf("\n\nDanh sach hoc sinh sau khi sap xep : ");
	for(int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (dshs[i].Diem < dshs[j].Diem){
                temp = dshs[i];
                dshs[i] = dshs[j];
                dshs[j] = temp;
            }
        }    
    }   
}


int main(){
    Hoso Lop[30];
    int n;
    printf("Nhap so hoc sinh cua lop: ");   scanf("%d", &n);
    Nhap(Lop, n);
    XepLoai(Lop, n);
    In(Lop, n);
    SapXep(Lop, n);
   In(Lop, n);
    getch();
    return 0;
}