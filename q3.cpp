#include<iostream>
#include<string>
using namespace std;
int main()
{
	float num1,num2,ans;
	char operato;
	cout<<"perform arithmetics operation of two number"<<endl;
	cout<<"-------------------------------------------------------";
	try
	{
		cout<<"enter the first number";
		cin>>num1;
		if(num1==0)
		throw 0;
		cout<<"enter the operator";
		cin>>operato;
		if(operato != '+' && operato != '-' && operato != '*' && operato != '/')
		throw operato;
		cout<<"enter the second number";
		cin>>num2;
		cout<<"\n----------------------------------------------------------------";
		switch(operato)
		{
			case'+':
				ans=num1+num2;
				break;
			case '-':
				ans=num1-num2;
				break;
			case '*':
				ans=num1*num2;
				break;
			case '/':
				if(num2==0)
				throw 0;
				ans=num1/num2;
				break;
			
		}
		cout<<"Ans="<<num1<<" "<<operato<<" "<<num2<<" "<<"="<<ans<<endl;
	}
	catch(const int n)
	{
		cout<<"\n Bad operation";
	}
	catch(const char c)
	{
		cout<<"exception handle  ...Bad operation"<<operato<<"Not a valid operator";
	}
	return 0;
}
