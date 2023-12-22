#include <iostream>
using namespace std;
int globle_var=42;
	
	int* returnPointerValue(){
		return &globle_var;
	}
int main()
{
	int var = 23;
	int*ptr_to_var=&var;
	cout<<"Passing a refrence to a pointer to funcation=>  "<<endl;
	cout<<"Before: "<<*ptr_to_var<<endl;
	ptr_to_var=returnPointerValue();
	cout<<"After: "<<*ptr_to_var<<endl;
	return 0;
}
