#include <iostream>
using namespace std;
int main()
{
	int num, power, res=1;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Enter the Power: ";
	cin>>power;
	
	for(int i=1; i<=power; i++){
		res = res * num;
		 
	}
	cout<<"The value is: "<<res;
}
