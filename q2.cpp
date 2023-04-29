#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 'a';
	}
	catch(char e)
	{
		cout<<"catch successfuly done="<<e<<endl;
	}
	return 0;
}
