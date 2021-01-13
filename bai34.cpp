#include<iostream>
using namespace std;
float power(float x,int n)
{
	int i,tg;
	for(i=tg=1;i<=n;i++)
	tg*=x;
	return tg;
}
int main()
{
cout<<"2 mu 3 ="<<power(2,3)<<endl;
	return 0;
}
