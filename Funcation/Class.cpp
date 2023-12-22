#include <iostream>
using namespace std;

class calculator{
	public:
		int sum(int a, int b){
			return a+b;
		}
		int sub(int a,int b){
			return a-b;
		}
		int multi(int a, int b){
			return a*b;
		}
		int divi(int a, int b){
			return a/b;
		}
};
	

int main()
{
	calculator cal;
	int a,b;
	char op;
	cout<<"Enter the First value ";
	cin>>a;
	cout<<"Enter the Operator(+,-,*,/): ";
	cin>>op;
	cout<<"Enter the second value ";
	cin>>b;
	
	switch(op){
		case'+':
			cout<<cal.sum(a,b);
			break;
		case'-':
			cout<<cal.sub(a,b);
			break;
		case'*':
			cout<<cal.multi(a,b);
			break;
		case'/':
			cout<<cal.divi(a,b);
			break;
		default:
			cout<<"Enter a valid thing.";
}
};
