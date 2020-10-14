#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 50

void Nhap(int A[MAX_SIZE][MAX_SIZE],int m, int n){
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++){
			printf("Nhap ma tran [%d][%d]= ", i, j);
			scanf("%d", &A[i][j]);
		}
}

void Xuat(int A[MAX_SIZE][MAX_SIZE], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d  ", A[i][j]);
		}
		printf("\n");
	}
}

void KiemTraPhanTu(int A[MAX_SIZE][MAX_SIZE], int m, int n){
    int x;
    int count = 0;
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &x);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(A[i][j] == x){
                printf("So nguyen %d trung voi phan tu o vi tri A[%d][%d]\n", x, i, j);
                count++;
            }
        }    
    }
    printf("Co %d phan tu trung voi so nguyen %d\n", count, x);
}

void CongMaTran(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int m, int n){
    int C[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }    
    printf("\nMa tran A + B:\n");
    for(int i = 0; i < m; i++)
    {    
        for(int j = 0; j < n; j++)
        {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m, n;
    printf("Nhap so cot ma tran A: ");
    scanf("%d", &m);
    printf("Nhap so dong ma tran A: ");
    scanf("%d", &n);
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    Nhap(A, m, n);
    printf("Ma tran A da nhap: \n");
    Xuat(A, m, n);
    KiemTraPhanTu(A, m, n);
    printf("Nhap ma tran B\n");
    Nhap(B, m, n);
    printf("Ma tran B da nhap: \n");
    Xuat(B, m, n);
    CongMaTran(A, B, m, n);
}
