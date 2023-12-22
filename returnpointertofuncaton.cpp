#include <iostream>
using namespace std;
int *myFuncation(){
	static int count = 0;
	count++;
	return &count;
}

int main()
{
	int *p;
	for(int i = 1; i<=3; i++){
		p=myFuncation();
		cout<<"Funcation return: "<<p<<endl;
		cout<<"value of count: "<<*p<<endl;
	}
	return 0;
}
