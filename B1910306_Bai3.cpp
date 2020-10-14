#include <stdio.h>
#include <conio.h>
#include <string.h>

struct NhanVien {
    char Ho[15];
    char Ten[15];
    float Luong;
    unsigned int Tuoi;
    char Diachi[20];
};

void Nhap(NhanVien dsnv[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin nhan vien thu %d\n", i + 1);
        printf("Nhap ho nhan vien: "); fflush(stdin);   gets(dsnv[i].Ho);
        printf("Nhap ten nhan vien: ");  gets(dsnv[i].Ten);
        printf("Nhap luong: ");  scanf("%f", &dsnv[i].Luong);
        printf("Nhap tuoi: ");  scanf("%d", &dsnv[i].Tuoi);
        printf("Nhap dia chi: "); fflush(stdin);  gets(dsnv[i].Diachi);
    }
}

void In(NhanVien dsnv[], int n){
    printf("\n\n\t\tDANH SACH CAN BO CONG NHAN VIEN\n");
    char str[50];
    char line[70]; 
	memset(line, '-', sizeof(line)-1);
	line[69]='\0';
    printf("%s\n", line); 
    printf("| STT\t| HO VA TEN\t\t| LUONG\t  | TUOI  | DIA CHI\t    |\n");
	memset(line, '-', sizeof(line)-1);
	line[69]='\0';
    printf("%s\n", line); 
    for (int i = 0; i < n; i++)
    {
        strcpy(str, dsnv[i].Ho); 
        strcat(str, " ");
        strcat(str, dsnv[i].Ten); // Gop ho va ten
        printf("| %-6d| %-22s| %-7.2f | %-6d| %-15s |\n", i + 1, str, dsnv[i].Luong, dsnv[i].Tuoi, dsnv[i].Diachi);
    }
	memset(line, '-', sizeof(line)-1);
	line[69]='\0';
    printf("%s\n", line); 
}

int main(){
    NhanVien nv[30];
    int n;
    printf("Nhap so nhan vien: ");
    scanf("%d", &n);
    Nhap(nv, n);
    In(nv, n);
    getch();
    return 0;
}