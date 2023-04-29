#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	char uname[50];
	char pass[20];
	cout<<"\n enter the user name"<<endl;
	gets(uname);
	cout<<"\n enter the pascode"<<endl;
	gets(pass);
	try
	{
	     if(strlen(pass)<6)
	     {
	     cout<<"pasword must be above 6 character most long"<<endl;
	     throw 'c';
	     }
	//now you need to be cheack one digit in the pasword.
	bool digit_yes=false;
	bool valid;
	int len = strlen(pass);
	for(int count=0;count<len;count++)
	{
		if(isdigit(pass[count]))
		digit_yes=true;
	}
	if (!digit_yes)
	{
		valid=false;
		cout<<"\n password must have atleast one digit(0-9)"<<endl;
		throw 'c';
	}
	else
	{
		valid=true;
		cout<<"\n password is correct";
	}
}
	catch(char c)
	{
		cout<<"\n invalid password format!!!";
	}
	catch(...)
	{
		cout<<"\n default exception";
	}
	return 0;
}
