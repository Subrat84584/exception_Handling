#include<iostream>
using namespace std;
int isvalid(char a[6]);
int main()
{
	char user[6];
	cout<<"enter user name in small latter";
	gets(user);
	try
	{
		if(isvalid(user))
		cout<<"valid user name";
		else
		throw 'c';
	}
	catch(char c)
	{
		cout<<"exception handle...invalid!!!"<<endl;
	}
	catch(...)
	{
		cout<<"default exception"<<endl;
	}
}
int isvalid(char a[6])
{
	int i,c=0;
	for(i=0;i<6;i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>=0&&a[i]<=9||a[i]=='@'||a[i]=='_')
		c++;
	}
	if(c==6)
	return 1;
	else
	return 0;
}
