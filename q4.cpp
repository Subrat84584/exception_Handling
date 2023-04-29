#include<iostream>
#include<string>
using namespace std;
bool isvalid(char *email);
int main()
{
	char email[100];
	cout<<"enter your email id";
	gets(email);
	try
	{
		if(isvalid(email))
		cout<<"email is valid"<<endl;
		else
		throw 'c';
	}
	catch(char c)
	{
		cout<<"exception catch ....invalid email id!!!";
	}
	catch(...)
	{
		cout<<"Default exception"<<endl;
	}
	return 0;
}
bool isvalid(char *email)
{
	int Atoffset=-1;
	int Dotoffset=-1;
	int length=0;
	for(int i=0;email!='\0';i++)
	{
		if(email[i]=='@')
		Atoffset=i;
		else
		if(email[i]=='.');
		Dotoffset=i;
		length++;
	}
	if(Atoffset==-1 && Dotoffset==-1)
	return 0;
	if(Atoffset>Dotoffset)
	return 0;
	return!(Dotoffset >= (length-1));
	
}
