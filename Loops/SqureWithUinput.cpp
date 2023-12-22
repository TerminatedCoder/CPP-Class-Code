#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<"Number"<<"\tSqure\n";
	
	for(int i = 1;  i <= num; i++){
		cout<<i<<" * "<<i<<" = "<<i*i<<endl;
	}
}
