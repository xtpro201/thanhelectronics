#include <iostream>
using namespace std;
int main()
{
	int A[5],n,i,sum;
	cout<<"nhap so phan tu n=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"nhap A["<<i<<"]=";
		cin>>A[i];
	}
	sum=0;
	for(i=0;i<n;i++)
	sum += A[i];
	cout<<"\nTong cac phan tu la:"<<sum<<endl;
	return 0;
	
}
