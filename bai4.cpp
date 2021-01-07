//code by xtpro
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	while(true)
	{
		cout << "\nNhap vao 2 so a,b: " << endl;
		cin >> a >> b;
		if(a-b>0) cout << a << " lon hon " << b;
		else if(a-b<0) cout << a << " nho hon " << b;
		else cout << a << " bang " << b;
	}
	return 0;
}