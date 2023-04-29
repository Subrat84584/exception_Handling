#include<iostream>
using namespace std;
int isvalid(int a[10]);
int main()
{
	int a[10];
	cout<<"enter your mobile number";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	try
	{
		if(isvalid(a))
		cout<<"Valid number"<<endl;
		else
		throw 'c';
		
	}
	catch(char c)
	{
		cout<<"exception catch .....invalid number"<<endl;
	}
	catch(...)
	{
		cout<<"default exception";
	}
	return 0;
}
int isvalid(int a[10])
	{
		int i,c=0;
		for(i=0;i<10;i++)
		{
			if(a[i]>=0&&a[i]<=9)
			c++;
		}
		if(c==10)
		return 1;
		else
		return 0;
	}
