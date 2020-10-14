#include <iostream>
using namespace std;
 
int main()
{
    int i, j, k, sl = 0;
    for (i = 0; i <= 10; ++i)
        for (j = 0; j <= 5; ++j)
            for (k = 0; k <= 2; ++k)
                if (i * 10 + j * 20 + k * 50 == 100)
                {
                    cout << i << " to 10, " << j << " to 20, " << k << " to 50." << endl;
                    sl++;
                }
    cout << "\nCo tat ca " << sl << " Cach chon!\n";
    return 0;
}
