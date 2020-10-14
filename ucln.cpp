#include <cmath>
#include <iostream>
using namespace std;
 
int main() {
    int i, a, b, min, ucln = 1;
 
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    if(a == 0 && b == 0) {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    } else if (a != 0 && b == 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(a) << endl;
    } else if (a == 0 && b != 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(b) << endl;
    } else {
        if(a < b) {
            min = a;
        } else {
            min = b;
        }
         
        for(int i = 1; i <= min; i++) {
            if(a%i == 0 && b%i == 0) {
                ucln = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln << endl;
    }
    return 0;
}
