#include<iostream>

using namespace std;

//swapping without temp variable

int main(){
	
	int a,b;
	cout<<"Input first number: "<<endl;
	cin>>a;
	cout<<"Input second number: "<<endl;
	cin>>b;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout<<"after swapping the first number: "<<a<<endl;
	cout<<"after swapping the second number: "<<b<<endl;
	
	return 0;
}
