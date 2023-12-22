#include <iostream>
using namespace std;
int main()
{
	int num, rem=0, res, n=0;
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int i=num; i>0; i=i/10){
		rem = i%10;
		res =  res + rem;
		//This is for count the digits in number
		n++;
		
	}
	//This is for count the digits in number
	cout<<"Digits in number is: "<<n<<endl;
	cout<<"Addition: "<<res;
}
