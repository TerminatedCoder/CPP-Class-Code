#include <iostream>
using namespace std;
int main()
{
	int num, res, rem=0;
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int i=num; i>0; i=i/10){
		rem = i%10;
		res = res * 10 + rem;
	}
	cout<<"The reverse value is: "<<res<<endl;
	
	if(res==num){
		cout<<"Number is palindrome";
	}
	else{
		cout<<"Number is not Palindrome";
	}
}
