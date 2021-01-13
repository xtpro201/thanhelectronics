#include<iostream>
using namespace std;
int main()
{
	int x[100],y[100],n,i,dem1=0,dem2=0,dem3=0;
	cout<<"Nhap so diem tren mat phang:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Nhap toa do cho diem"<<i<<":";
		cin>>x[i]>>y[i];
	}
	cout<<"Day diem sau khi nhap la:"<<endl;
	for(i=1;i<=n;i++)
	cout<<"("<<x[i]<<","<<y[i]<<");";
	for(i=1;i<=n;i++)
	{
		if (y[i]>=0)
		dem2++;
		else dem3++;
	}
	cout<<"So doan cat truc hoanh la:"<<dem2*dem3<<endl;
	system("pause");
	return 0;
	
}
