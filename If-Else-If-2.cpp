#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a value: ";
	cin>>num;
	
	if(num>100){
		cout<<"Number is greater then 100";
	}
	else if(num<100){
		cout<<"Number is smaller then 100";
	}
	else{
		cout<<"Number is equal to 100";
	}
	
}
