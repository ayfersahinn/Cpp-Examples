#include<iostream>

using namespace std;

//Calculating the volume of a cube

int main(){
	int side;
	float vol;
	
	cout<<"Please input the side of the cube : ";
	cin>>side;
	
	vol = side*side*side;
	
	cout<<"The volume of the cube is : "<<vol;
	
	return 0;
}
