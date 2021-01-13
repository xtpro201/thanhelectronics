#include <iostream>
using namespace std;
int main()
{
	int A[100],n,i,maxchan,demmax = 0;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Nhap A1"<<i<<"=";
		cin>>A[i];
	}
	cout<<"\n day so sau khi nhap la";
	for(i=1;i<=n;i++)
	cout<<A[i]<<"\t";
	for(i=1;i<=n;i++)
	if ((A[i]*A[i+1]) % (A[i]+A[i+1])==0)
	cout<<"hai so lien tiep thoa man la:"<<A[i]<<"va"<<A[i+1];
	for(i=1;i<=n;i++)
	{
		if(A[i] % 2 == 0)
		maxchan = A[i];
		break;
	}
	for(i=1;i<=n;i++)
	if(A[i] % 2 == 0 && A[i]> maxchan)
	maxchan = A[i];
	cout<<"\n so chan lon nhat xuat hien so lan la:"<<demmax;
	system("pause");
	return 0;
}
