#include <iostream>
using namespace std;
int main()
{
	
	
	int n1,n2,res;
	cout<<"Enter the value of n1 and n2: ";
	cin>>n1>>n2;
	char op;
	cout<<"Enter a operator(+,-,*,/,%): ";
	cin>>op;
	switch(op)
	{
	
		case '+':
			res = n1 + n2;
			cout<<"Addition is: "<<res;
			break;
		case '-':
			res = n1 - n2;
			cout<<"subscration is: "<<res;
			break;
		case '*':
			res = n1 * n2;
			cout<<"multiplation is: "<<res;
			break;
		case '/':
			res = n1 + n2;
			cout<<"Devidtion is: "<<res;
			break;
		case '%':
			res = n1 % n2;
			cout<<"percent is: "<<res;
			break;
		default:
			cout<<"Please Enter a correct symbol";
}
}
