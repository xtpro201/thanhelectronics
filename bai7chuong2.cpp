#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x[100],y[100],n,i,dem=0,dodai1=0,dodai2=0;
	float R;
	cout<<"Nhap so diem tren mat phang:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"\n Nhap toa do x,y cho cac diem"<<i<<":";
		cin>>x[i]>>y[i];
	}
	cout<<"\n Day diem sau khi nhap la:\n";
	for(i=1;i<=n;i++)
	cout<<"("<<x[i]<<","<<y[i]<<");";
	cout<<"Nhap so thuc R:";
	cin>>R;
	for(i=1;i<=n;i++)
	if(sqrt(x[i]*x[i]*y[i])<R) dem++;
	cout<<"\n nhap so thuc R:";
	cin>>R;
	for(i=1;i<=n;i++)
	if (sqrt(x[i]*x[i]+y[i]*y[i])<R) 
	dem++;
	cout<<"\n So diem nam trong duong tron tam O ban kinh R la:"<<dem<<endl;
	for(i=2;i<n;i++) 
	dodai2=dodai2+ sqrtl((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
	cout<<"\n Do dai duong gap khuc 1 la:"<<dodai1<<endl;
	cout<<"\n do dai duong gap khuc 2 la:"<<dodai2<<endl;
	cout<<"\n Do dai duong gap khuc thu nhat lon hon do dai duong gap khuc thu 2 la:"<<dodai1-dodai2<<endl;
	system("pause");
	return 0;
}
