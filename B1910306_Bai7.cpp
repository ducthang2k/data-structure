/*  7. Viết chương trình nhập vào một chuỗi, in ra chuỗi đảo ngược của nó theo từng từ.
Thí dụ : chuỗi “Nguyen Van Minh” đảo thành “Minh Van Nguyen”. */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void DaoNguoc(char str[50]){
    int i = strlen(str) - 1;
    for (; i >= 0; i--)
    {
        if (str[i] == ' ') {
            printf("%s ",str + i + 1);
            str[i] = '\0';
        }
        if (i == 0) {
            printf("%s",str);
        }
    }
    
}

int main(){
    char str[50];
    printf("Nhap chuoi: ");
    fgets(str, 50, stdin);
    DaoNguoc(str);
    getch();
    return 0;
}