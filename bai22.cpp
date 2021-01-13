#include<iostream>
using namespace std;
int main()
{
	int count = 0, x;
	while (1)
{
	cin>>x;
	if(x==0)
	break;
	if(x%3==0 && x%5!=0)
	count++;
}
cout<<"cac so chia het cho 3 va ko chia het cho 5la:"<<count;
return 0;
	
}
