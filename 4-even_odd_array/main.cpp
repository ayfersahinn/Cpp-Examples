#include<iostream>

using namespace std;

//calculating the sum of all even and odd numbers in an array

int main(){
	
	int array[] = {1,2,3,4,5,6,7,8,9};
	
	int sum_of_even=0, sum_of_odd=0;
	int a = sizeof(array)/sizeof(array[0]);       //calculating size of array
	for(int i=0; i<a; i++)
	{
		if(array[i]%2==0)
		{
			sum_of_even += array[i];
		}
		else
		{
			sum_of_odd += array[i];
		}
	}
	
	cout<<"sum of even numbers: "<<sum_of_even<<endl;
	cout<<"sum of odd numbers: "<<sum_of_odd<<endl;
	
	
	return 0;
}
