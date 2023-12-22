#include <iostream>
using namespace std;

int a=10;
int b=20;

int without(){
	a=10;
	for(int i=1; i<=b; i++){
		a++;
	}
	return a;
}
int main()
{	for(int i=1; i<=b; i++){
		a++;
	}
	cout<<"First: "<<a<<endl;
	cout<<without();
}
