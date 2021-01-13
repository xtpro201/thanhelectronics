#include<iostream>
using namespace std;
int giaithua(int n)
{
	if (n==0)
	return 1;
	else
	return (giaithua(n-1)*n);
}
int main()
{
	int m,i,T=0;
	cout<<"Nhap so tu nhien m=";
	cin>>m;
	for(i=1;i<=m;i++)
	T= T+ giaithua(i);
	cout<<"tong T="<<T<<endl;
	return 0;
	
}
