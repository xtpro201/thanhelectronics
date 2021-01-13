#include <iostream>
using namespace std;
int main()
{
	float t,ep;
	int i;
	cin>>ep;
	i=1;
	t=0;
	while (1/i>=ep)
	{
		t+=1/i;
		i++;
	}
	cout<<"tong chuoio so la:"<<t;
	return 0;
}
