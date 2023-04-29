#include<iostream>
using namespace std;
void test_try(int num)
{
	try
	{
		if(num>=1 && num<=9)
		throw num;
		else
		cout<<"It is not s single number"<<endl;
		throw;   //bydefault written termination called without any exception
	}
	catch(int num)
	{
		cout<<"It is a single number";
	}
	catch(char b[100])
	{
		cout<<b<<endl;
	}
}
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	test_try(num);
	return 0;
}
