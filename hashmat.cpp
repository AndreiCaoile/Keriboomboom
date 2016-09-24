#include<iostream>
#include<cmath>
using namespace std;
unsigned int c[3],i,a,b;
int main()
{
	for(i=0;i<3;i++)
	{
		cin>>a>>b;
		c[i]=abs(a-b);
	}
	cout<<endl<<c[0]<<endl<<c[1]<<endl<<c[2]<<endl;
	return 0;
}
