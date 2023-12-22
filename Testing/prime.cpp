#include <iostream>
using namespace std;


	int prime(int num, int c){
		
	for (int i=1; i <= num; i++){
		if(num%i==0){
			c++;
		}
	}
	if(c==2){
		return 1;
	}
	else {
		return 2;
	}
	
	
		
	}
	int main(){
		int num, c = 0;
	cout<<"Enter a number: ";
	cin>>num;
		
		prime(num,c);
		
		
		if(prime(num,c)==1){
		cout<<"The number is prime";
	}
	else {
		cout<<"Number is not a prime number";
	}
	}
	
	

