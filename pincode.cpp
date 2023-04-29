#include<iostream>
using namespace std;
int isvalid(int a[6]);
int main()
{
	int a[10];
	cout<<"enter your pincode";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	try
	{
		if(isvalid(a))
		cout<<"Valid pincode number"<<endl;
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
int isvalid(int a[6])
	{
		int i,c=0;
		for(i=0;i<6;i++)
		{
			if(a[i]>=0&&a[i]<=9)
			c++;
		}
		if(c==6)
		return 1;
		else
		return 0;
	}
