#include<iostream>
using namespace std;
int main()
{
	int n,i,A[100],dem=0;
	bool kiemtra;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
{
	cout<<"Nhap A["<<i<<"]=";
	cin>>A[i];
}
cout<<"\n day so sau khi nhap la:\n";
for(i=1;i<=n;i++)
cout<<A[i]<<endl;
for(i=1;i<=n;i++)
if(A[i]>=-15 && A[i]<=25) dem++;
cout<<"\n So phan tu trong doan tu -15 den 25 la:"<<dem<<endl;
kiemtra=true;
for(i=1;i<n;i++)
if(A[i]<A[i+1])
kiemtra=false;
if (kiemtra==true && A[i]>A[n])
cout<<"\n Day giam thuc su";
else cout<<"\n Day khong giam thuc su"<<endl;
system("pause");
return 0;
}
