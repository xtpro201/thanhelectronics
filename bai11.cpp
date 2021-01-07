//code by xtpro
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Thoi gian bieu ca nhan tu thu 2 den chu nhat." << endl;
	while (true)
	{
		cout << "Hay nhap cac lua chon: " << endl;
		cout << "1.Thu hai\n2.Thu ba\n3.Thu tu\n4.Thu nam\n5.Thu sau\n6.Thu bay\n7.Chu nhat\n";
		cin >> x;
			if (x==1) cout << "Monday go to school\n";
			else if (x==2) cout << "Tuesday go swimming\n";
			else if (x==3) cout << "Wednesday go to school\n";
			else if (x==4) cout << "Thursday go fishing\n";
			else if (x==5) cout << "Fridays free\n";
			else if (x==6) cout << "Saturday go to school\n";
			else if (x==7) cout << "Sunday to travel\n";
			else cout << "Ban nhap sai roi" << endl;
	} 
	return 0;
}