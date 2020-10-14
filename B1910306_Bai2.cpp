/*  2. Viết chương trình nhập một chuỗi ký tự từ bàn phím, xuất ra màn hình chuỗi đảo ngược của chuỗi
đó. Thí dụ đảo của “abcd egh” là “hge dcba”.   */

#include <stdio.h>
#include <string.h> 
#include <conio.h>

int main(){
    char Chuoi[30];
    printf("Nhap mot chuoi ki tu: ");
    fgets(Chuoi, 30, stdin);

    printf("Chuoi da duoc dao nguoc: ");
    int n = strlen(Chuoi) - 1; // Không lấy phần tử '\0'
    for (int i = n; i >= 0; i--)    // Duyệt ngược từ cuối chuỗi về đầu chuỗi
    {
        printf("%c", Chuoi[i]);
    }
    getch();
}