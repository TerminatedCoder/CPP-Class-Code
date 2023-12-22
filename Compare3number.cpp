#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	
	cout<<"Enter value for n1, n2, n3: ";
	cin>>n1>>n2>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"n1 is greater";
	}
	if(n2>n1 && n2>n3){
		cout<<"n2 is greater";
	}
	else{
		cout<<"n3 is greater";
	}
}
