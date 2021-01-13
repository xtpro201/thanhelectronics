#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x[100],y[100],n,i;
	cout<<"Nhap so diem tren mat phang : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"\n Nhap toa do x,y cho diem"<<i<<":";
		cin>>x[i]>>y[i];
	}
	cout<<"\n Day diem sau khi nhap la: \n";
	for(i=1;i<=n;i++)
	cout<<"("<<x[i]<<","<<y[i]<<");";
	cout<<"\n Khoang cach cua tung diem den truc Oy la: \n";
	for(i=1;i<=n;i++)
	cout<<"\n khoang cach cua diem "<<i<<"den truc Oy la:"<<abs(x[i])<<endl;
	system("pause");
	return 0;
}

