#include <iostream>

//palindrome number

using namespace std;

int main(){
	
	string str;
	cout<<"Enter the value ";
	cin>>str;

	int length = str.size();               //strings are also array
	int last = length;
	int i=0;
	bool palindrome = true;
	
	while(i<last)
	{
		if(str[i]!=str[last-1])         //str[length-1] means last character of array
			palindrome = false;
		i++;
		last--;
	}
	
	if(palindrome)
		cout<<"It is a palindrome number";
	else
		cout<<"It is not a palindrome number";
	return 0;
}
