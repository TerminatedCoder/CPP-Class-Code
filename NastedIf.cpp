#include <iostream>
using namespace std;
int main()
{
		int num1, num2, num3;
	
	cout<<"Enter the value for num1,num2 and num3: ";
	cin>>num1>>num2>>num3;
	
	if(num1>num2){
		if(num1>num3){
			cout<<"num1 is greater";
		}
		else{
			cout<<"Num3 is greater";
		}
	}
	else{
		if(num2>num3){
			cout<<"num2 is greater";
		}
		else{
			cout<<"Num3 is greater";
		}
	}
	
}
