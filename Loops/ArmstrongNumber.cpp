#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num, res=0, rem,n=0;
	cout<<"Enter a number; ";
	cin>>num;
	
	for(int i = num; i > 0; i=i/10){
		n++;
	}
	
	for(int i = num; i > 0; i=i/10){
		rem = i%10;
		res = res + pow(rem, n);
	}
	
	if (res == num)
	{
		cout<<"The number is armstrong!";
	}
	else{
		cout<<"The number is not armstrong!";
	}
}
