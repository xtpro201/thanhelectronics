#include<iostream>
using namespace std;
int main()
{
	int A[100],n,i,M,TBC,dem=0;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
	cout<<"\n Day so sau khi nhap la:";
	cin>>n;
	for (i=1;i<=n;i++)
	{
	cout<<"Nhap A["<<i<<"]=";
	cin>>A[i];	
	}
	cout<<"Day so sau khi nhap la:"<<endl;
	for(i=1;i<=n;i++)
	cout<<A[i]<<"\t";
	for(i=1;i<=n;i++)
	TBC=TBC+A[i];
	TBC=TBC/n;
	for(i=1;i<=n;i++)
	if(A[i]>TBC)
	dem++;
	cout<<"\n So phantu > TBC cua day la:"<<dem;
	system("pause");
	return 0;
}
