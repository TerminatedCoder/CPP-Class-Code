#include <iostream>
using namespace std;
int main()
{
	int num, res=0;
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int i = num; i>=1; i--){
		res = res + i;
		cout<<res<<endl;
	}
	cout<<"Sum is: "<<res;
}
