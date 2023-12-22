#include <iostream>
using namespace std;

	int sum(int a, int b){
		return a+b;
	}
	
	int sub(int a, int b){
		return a-b;
	}
	
	int divi(int a, int b){
		return a/b;
	}
	
	int mul(int a, int b){
		return a*b;
	}
	
	
	int main(){
		
		int a,b;
		char op;
		cout<<"Enter value for a: ";
		cin>>a;
		cout<<"Enter value for b: ";
		cin>>b;
		cout<<"Enter operator(+,-,*,/): ";
		cin>>op;
		
		switch(op){
			case '+':
				cout<<"Addition of "<<a<<" and "<<b<<" is: "<<sum(a,b);
				break;
			case '-':
				cout<<"Subscration of "<<a<<" and "<<b<<" is: "<<sub(a,b);
				break;
			case '*':
				cout<<"Multiply of "<<a<<" and "<<b<<" is: "<<mul(a,b);
				break;
			case '/':
				cout<<"Devide of "<<a<<" and "<<b<<" is: "<<divi(a,b);
				break;
		}
	}
