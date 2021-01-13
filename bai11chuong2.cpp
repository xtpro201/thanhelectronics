#include <iostream>
using namespace std;
int main()
{
	int A[100],n,i,TBC=0,dem=0;
	bool kiemtra;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
	cout<<A[i]<<"\t";
	for(i=1;i<=n;i++)
	if (A[i] %2==0 && A[i]%4 !=0)
	{
		TBC= TBC +A[i];
		dem++;
	}
	cout<<"\n TBC cac so chan ko chia het cho 4 la:"<<TBC/dem;
	kiemtra=true;
	for(i=1;i<=n/2;i++)
	if(A[i] != A[n-i+1])
	kiemtra=false;
	if(kiemtra==true && n% 2!=0)
	cout<<"\n Day doi xung le \n";
	else 
	cout<<"\n Day khong doi xung le.";
	system("pause");
	return 0;
}
