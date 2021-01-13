#include<iostream>
using namespace std;
int main()
{
	int A[100],n,i,j,dem=0,tg;
	cout<<"nhap phan tu cua day:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Nhap A["<<i<<"]=";
		cin>>A[i];
	}
	cout<<"day so sau khi nhap la:"<<endl;
	for(i=0;i<n-1;i++)
	if(( A[i]%2==0 && A[i+1]%2==0 && A[i]<A[i+1] )||( A[i]%2!=0 && A[i+1]%2!=0 && A[i]<A[i+1])) dem++;
	cout<<"so cap 2 so lien tuc thoa man la:"<<dem<<endl;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(A[i]>A[j])
{
	tg=A[i];
	A[i]=A[j];
	A[j]=tg;
}
cout<<"day so sau khi sap xep tang dan la:"<<endl;
for (i=0;i<n;i++)
cout<<A[i]<<"\t";
system("pause");
return 0;
}
