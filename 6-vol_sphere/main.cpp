#include<iostream>

using namespace std;


//Calculating the volume of a sphere

int main(){
	
	int rad;                        //radius of sphere
	float vol;                      //volume of sphere
	
	cout<<"Please input the radius of the sphere : ";
	cin>>rad;
	
	vol = (4*3.14*rad*rad*rad)/3;
	
	cout<<"The volume of the sphere is : "<<vol;
	return 0;
}
