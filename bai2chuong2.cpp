#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,i;
	float A[100],S=0;
	bool kiemtra;
	cout<<"Nhap so phan tu cua day:";
	cin>>n;
	for(i=1;i<=n;i++)
	cout<<A[i]<<"\n";
	for(i=1;i<=n;i++)
	S=S+A[i]/(n-i+1);
	cout<<"\n Can bac 2 = "<<sqrt(S)<<endl;
	kiemtra=true;
	 for(i=1;i<=n/2;i++)
	 if(A[i]!=A[n-i+1])
	 if (kiemtra==true)
	 cout<<"\n Day doi xung.\n";
	 else cout<<"\n Day khong doi xung.";
	 system("pause");
	 return 0;
	
}
