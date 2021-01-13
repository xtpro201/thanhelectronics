#include<iostream>
using namespace std;
int main()
{
	int A[100],n,i,Tong=0;
	bool kiemtra;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
	if (A[i]% 2==0 && A[i]%4!=0)
	Tong=Tong+A[i];
	cout<<"\n Tong cac sochia het cho 2 va ko chia het cho 4 la:"<<Tong;
	kiemtra==true;
	for(i=1;i<=n/2;i++)
	if(A[i]!=A[n-i+1])
	kiemtra=false;
	if(kiemtra==true)
	cout<<"\n day doi xung. \n";
	else cout<<"\n Day khong doi xung.";
	system("pause");
	return 0;
}
