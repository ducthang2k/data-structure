/*  6. Viết chương trình nhập vào một chuỗi rồi xuất chuỗi đó ra màn hình dưới dạng mỗi từ một dòng.
Thí dụ: “Nguyễn Văn Minh”
In ra:
Nguyen
Van
Minh
 */


#include <stdio.h>
#include <string.h>
#include <conio.h>

void XuongDong(char str[50]){
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            printf("%c",str[i]);
        } else {
            printf("\n");
        }
    }
}

int main(){
    char str[50];
    printf("Nhap chuoi: ");
    gets(str);
    XuongDong(str);
    getch();
    return 0;
}


