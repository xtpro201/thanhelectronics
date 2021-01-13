#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x[100],y[100],n,i,dem=0;
	float pi=3.14,r=0;
	cout<<"nhap so diem tren mat phang :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"\n Nhap toa do x,y cho diem "<<i<<":";
		cin>>x[i]>>y[i];
	}
	cout<<"\n day diem sau khi nhap la:";
	for(i=1;i<=n;i++)
	if(x[i]<0 && y[i]<0)
	dem++;
	cout<<"\n so diem nam trong doc phan tu thu 3 va nam tren duong y=x la:"<<dem;
	for(i=1;i<=n;i++)
	if(sqrt((x[i+1]-x[i])*(x[i+1])-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i])>r)
	    r=sqrt(x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]);
	cout<<"\n Dien tich hinh tron:"<<pi*r*r<<endl;
	system("pause");
	return 0;

	
}
