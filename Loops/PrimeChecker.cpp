#include <iostream>
using namespace std;
int main()
{
	int num, c = 0;
	cout<<"Enter a number: ";
	cin>>num;
	for (int i=1; i <= num; i++){
		if(num%i==0){
			c++;
		}
	}
	if(c==2){
		cout<<"The number is prime";
	}
	else {
		cout<<"Number is not a prime number";
	}
}
