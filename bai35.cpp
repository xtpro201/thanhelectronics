#include <iostream>
using namespace std;
int giaithua(int k)
{
	int i,tg;
	for (i=tg=1;i<=k;i++)
	tg*=i;
	return tg;
}
int main()
{
	int c,n,m;
	cout<<" cho 2 so tu nhien m,n : ";
	cin>>n>>m;
	c = giaithua(n)/(giaithua(m)*giaithua(n-m));
	cout<<"to hop chap"<<n<<"cua"<<m<<"phan tu ="<<c<<endl;
	return 0;
}
