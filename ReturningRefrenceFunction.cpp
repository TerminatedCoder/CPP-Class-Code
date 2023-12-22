#include <iostream>
using namespace std;

int globle_var=42;
	
	int& returnRefrence(){
		return globle_var;
	}
int main()
{
	int var = 23;
	int*ptr_to_var=&var;
	cout<<"Returning a refrence => "<<endl;
	cout<<"Before: "<<*ptr_to_var<<endl;
	ptr_to_var=& returnRefrencee();
	cout<<"After: "<<*ptr_to_var<<endl;
	return 0;
}