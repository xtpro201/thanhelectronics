#include <iostream>
using namespace std;
int main()
{
	int A[100],n,i, TBC=0;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"nhap A["<<i<<"]=";
		cin>>A[i];
	}
	cout<<"\n Day so sau khi nhap la: \n";
	for(i=1;i<=n;i++)
	cout<<A[i]<<"\t";
	for(i=1;i<=n;i++)
	TBC=TBC+A[i];
	cout<<"\n TBC cua day la:"<<TBC/n<<endl;
	system("pause");
	return 0;
}
