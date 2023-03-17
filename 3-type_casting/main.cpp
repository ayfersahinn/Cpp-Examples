#include<iostream>
#include<iomanip>

using namespace std;

//Type Casting

int main(){

	int a = 4, b = 8;
	double c = 5.5, d = 6.6;
	
	cout<<fixed<<setprecision(1)<<endl;           //Print floating-point number in fixed format with 1 decimal place.
	
	cout<<"a / b                  "<< a/b <<endl;
	cout<<"c / d                  "<< c/d <<endl;
	
	cout<<"(double)a / b          "<< (double)a/b <<endl;
	cout<<"a / (double)b          "<< a/(double)b <<endl;
	cout<<"(double)(a / b)        "<< (double)(a/b)<<endl;
	
	
	cout<<"(int)c / b             "<< (int)c/b <<endl;
	cout<<"(int)(c / b)           "<< (int)(c/b) <<endl;
	
	c = a;          
	cout<<"c: "<<c<<endl;
	b = d;
	cout<<"b: "<<b<<endl;
	
	
	return 0;	
}
