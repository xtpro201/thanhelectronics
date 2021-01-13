#include <iostream>
using namespace std;
int main()
{
	int A[100],B[100],n,i,maxA,demB;
	cout<<"Nhap so phan tu cua moi day:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"mhap A["<<i<<"]=";
		cin>>A[i];
		cout<<"Nhap B["<<i<<"]=";
		cin>>B[i];
	}
	cout<<"\n day so A asu khi nhap la: \n";
	for(i=1;i<=n;i++)
	cout<<A[i]<<"\t";
	cout<<"\n day so b sau khi nhap la: \n";
	for(i=1;i<=n;i++)
	cout<<B[i]<<"\t";
	maxA=A[1];
	for(i=2;i<=n;i++)
	if (A[i]>maxA)
	maxA=A[i];
	cout<<"\n so lon nhat trong day A la:"<<maxA;
	for(i=1;i<=n;i++)
	if(B[i]>maxA)
	demB++;
	cout<<"\n so phan tu trong day B>maxA la:"<<demB;
	for(i=1;i<=n;i++)
	if(A[i]== B[i])
	cout<<"hai cap so bang nhau la: A["<<i<<"]=B["<<i<<"]="<<A[i]<<endl;
	system("pause");
	return 0;
}

