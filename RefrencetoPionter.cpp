#include <iostream>
using namespace std;
	int globle_var=42;
	
	void  changeRefrenceValue(int*&pp){
		pp=&globle_var;
	}
int main()
{
	int var = 23;
	int*ptr_to_var=&var;
	cout<<"Passing a refrence to a pointer to funcation=>  "<<endl;
	cout<<"Before: "<<*ptr_to_var<<endl;
	changeRefrenceValue(ptr_to_var);
	cout<<"After: "<<*ptr_to_var<<endl;
	return 0;
}
