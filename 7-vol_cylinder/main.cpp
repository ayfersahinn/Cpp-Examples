#include<iostream>

using namespace std;

//Calculating the volume of a cylinder
int main(){
	
	int rad,height;
	float vol;
	
	cout<<"Please input the radius of the cylinder : ";
	cin>>rad;
	cout<<"Please input the height of the cylinder : ";
	cin>>height;
	
	vol = 3.14*rad*rad*height;
	
	cout<<"The volume of the cylinder is : "<<vol;
	
	return 0;
	
}
