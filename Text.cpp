#include <iostream>
using namespace std;

int main()
{
	
	int a = 10;
	int b = -1;
	int c;
	
	try{
	if(b>0){
	c = a/b;
	cout<<c;
		
	}	else{
	throw 50;
	}
	}
	catch(...){
		cout<<"b is  0";
	}
}
