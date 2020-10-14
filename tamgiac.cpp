#include <iostream>
#include <math.h>

using namespace std;

void xettg (int a, int b, int c)
{
	if(a+b > c && a+c > b && c+b > a)
		{
			if(a==b && c==b && a==c)
			{
				cout << "Day la tam giac deu.\n";
				cout <<	"	*\n" <<
					"	 *	   *\n" <<
				"	  *		*	  *\n";
			}
			else if(a==b || a==c || c==b)
			{
				cout << "Day la tam giac can.\n";
					cout <<	"	*\n" <<
						"	 *	   *\n" <<
					"	  *			  *\n" <<
					"  *		*		 *\n";
			}
			else if(pow(a,2)== pow(b,2)+pow(c,2) || pow(b,2)== pow(c,2)+pow(a,2) || pow(c,2)== pow(b,2)+pow(a,2))
			{
				cout << "Day la tam giac vuong.\n";
				cout << "*\n"  <<
						"* *\n" <<
						"*	*\n" <<
						"*	  *\n" <<
						"*	*   *\n";
			}
			else if((a==b || a==c || c==b) && (pow(a,2)== pow(b,2)+pow(c,2) || pow(b,2)== pow(c,2)+pow(a,2) || pow(c,2)== pow(b,2)+pow(a,2)))
			{
				cout << "Day la tam giac vuong can.";
					cout << "*\n"  <<
							"* *\n" <<
							"*	 *\n" <<
							"*	   *\n" <<
							"* * * * *\n";
			}
	
		}
	else 
		{
			cout << "Day khong phai tam giac.";
		}
}

int main()
{
	int a,b,c;
	cout << "Nhap do dai canh a = ";
	cin >> a;
	cout << "Nhap do dai canh b = ";
	cin >> b;
	cout << "Nhap do dai canh c = ";
	cin >> c;
	xettg(a,b,c);
}
