/* 5. Viết chương trình nhập vào một chuỗi.
- Hiển thị lên màn hình từ bên trái nhất và phần còn lại của chuỗi. Thí dụ: “Nguyen Van Minh”
in ra thành:
 Nguyen
 Van Minh
- Hiển thị lên màn hình từ bên phải nhất và phần còn lại của chuỗi. Thí dụ: “Nguyen Van Minh”
in ra thành:
 Minh
 Nguyen Van
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

void XuongDongTrai(char str[50]){
    bool check = true;
    int i = 0;

    for (; i < strlen(str) && check == true; i++) {
        if (str[i] != ' ') {
            printf("%c",str[i]);
        } else {
            printf("\n");
            str = str + i + 1;
            check = false;
        }
    }
    puts(str);
}


void XuongDongPhai(char str[50]){
    bool check = true;
    int i = strlen(str) - 1;

    for (; i > 0 && check == true; i--) {
        if (str[i] == ' ') {
            printf("%s",str + i + 1);
            printf("\n");
            str[i] = '\0';
            check = false;
        }
    }
    puts(str);
}


int main(){
    char str[50];
    printf("Nhap chuoi: ");
    fgets(str, 50, stdin);
    printf("Chuoi duoc hien thi tu ben trai nhat va phan con lai cua chuoi: \n");
    XuongDongTrai(str);
    printf("Chuoi duoc hien thi tu ben phai nhat va phan con lai cua chuoi: \n");
    XuongDongPhai(str);
    getch();
    return 0;
}