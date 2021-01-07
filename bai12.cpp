//code by xtpro
#include <iostream>
using namespace std;
int main()
{
	int x;
	while (true)
	{
		cout << "Nhap vao cac so tu 0-9:" << endl;
		cin >> x;
		if (x == 0) cout << "Zero\n";
		else if (x == 1) cout << "One\n";
		else if (x == 2) cout << "Two\n";
		else if (x == 3) cout << "Three\n";
		else if (x == 4) cout << "Four\n";
		else if (x == 5) cout << "Five\n";
		else if (x == 6) cout << "Six\n";
		else if (x == 7) cout << "Seven\n";
		else if (x == 8) cout << "Eight\n";
		else if (x == 9) cout << "Nine\n";
		else cout << "Ban nhap sai roi\n";
	}
	return 0;
}