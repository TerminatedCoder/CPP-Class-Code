#include <iostream>
using namespace std;
int globle_var=42;
void changePointerValue(int *pp){
	pp=&globle_var;
	cout<<"The value of pp: "<<*pp<<endl;
}
int main()
{
	int var = 23;
	int *ptr_to_var = &var;
	cout<<"passing Pointer to Funcation: "<<endl;
	cout<<"Before: "<<*ptr_to_var<<endl;
	changePointerValue(ptr_to_var);
	cout<<"After: "<<*ptr_to_var<<endl;
	return 0;
}
