#include <iostream>
using namespace std;
int main()
{
	int num, res=1;
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int i = num; i>=1; i--){
		res = res * i;
	}
	cout<<"Factorial is: "<<res;
}
