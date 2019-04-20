#include <iostream>
using namespace std;
void main()
{
	int n;
	cout << "Nhap so nguyen n:" << endl;
	cin >> n;
	int i;
	bool check = true;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			check = false;
	}
	if(check==false)
		cout << "n khong phai so nguyen to" << endl;
	else
		cout << "n la so nguyen to" << endl;
		
	system("pause");
}