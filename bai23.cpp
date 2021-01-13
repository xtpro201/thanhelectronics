#include<iostream>
using namespace std;
int main()
{
	int odd = 0,even =0,x;
	while(1)
{
	cin>>x;
	if (x<0)
	 continue;
	if(x==0)
	break;
	if(x%2==0)
	even+=x;
	else
	odd+=x;
}
cout<<"tong cac so chan ="<<even<<endl;
cout<<"tong cac so le = "<<odd;
return 0;
}
