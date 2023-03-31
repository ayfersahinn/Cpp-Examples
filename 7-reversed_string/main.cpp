#include<iostream>

//reverse string
using namespace std;

int main()
{
	
	string str;
	char temp;
	cout<<"please enter some string values: ";
	getline(cin,str);
	
	int len = str.size();
	
	for(int i=0; i<len/2; i++)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;	
	}	
	
	cout<<"reversed value: ";
	
	for(int j=0; j<len; j++)
	{
		cout<<str[j];
	}
	
	return 0;
}
