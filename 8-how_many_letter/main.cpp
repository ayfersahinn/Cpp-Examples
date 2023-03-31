#include<iostream>

using namespace std;

int main()
{
	string text;
	char letter;
	int count=0;
	
	cout<<"please enter a text: ";
	getline(cin,text);
	cout<<"please enter a letter which you want to search: ";
	cin>>letter;
	
	int len = text.size();
	
	for(int i=0; i<len; i++)
	{
		if(text[i]==letter)
		{
			count++;
		}
	}
	
	cout<<"there is "<<count<<" letter "<<letter;
	return 0;
}
