#include<iostream>

using namespace std;

//Swap 2 numbers

int main(){
	int num1, num2, temp;
	
	cout<<"Please enter first number: ";
	cin>>num1;
	cout<<"Please enter second number: ";
	cin>>num2;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<endl<<"New value of first number :"<<num1<<endl;
	cout<<"New value of second number :"<<num2;
	
	return 0;
}
