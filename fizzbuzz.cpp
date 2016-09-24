#include<iostream>
using namespace std;
int i;

int main()
{
	cout<<"****************************\nFizzBuzz\nPrint numbers from 1 to 100.\n****************************\n";
	for(i=1;i<101;i++)
	{
		if((i%3==0)&&(i%5!=0))
		{
			cout<<"Fizz\n";
		}
		else if((i%5==0)&&(i%3!=0))
		{
			cout<<"Buzz\n";
		}
		else if((i%3==0)&&(i%5==0))
		{
			cout<<"FizzBuzz\n";
		}
		else
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
