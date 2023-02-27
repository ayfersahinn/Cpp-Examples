#include <iostream>

using namespace std;

int main(){
	
	int num = 47;
	
	cout<<num++<<endl;               //first, it prints the value then increases it. 
	
	cout<<++num<<endl;               //first, it increases the value then prints it.
	
	num = num + 1;
	cout<<num<<endl<<endl;
	
	//post decrement and pre decrement
	
	
	cout<<num--<<endl;              //first, it prints the value after that decreases it. 
	
	cout<<--num<<endl;              //first, it decreases the value after that prints it.
	
	num = num -1;
	cout<<num<<endl;
	return 0;
}
