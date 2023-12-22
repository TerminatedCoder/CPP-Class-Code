#include <iostream>
using namespace std;
int main()
{
	int range, n1=0, n2=1, n3;
	
	cout<<"Enter a range for series: ";
	cin>>range;
	
	cout<<n1<<" "<<n2;
	for(int i=3; i<=range; i++){
		n3=n1+n2;
		cout<<" "<<n3;
		n1=n2;
		n2=n3;
	}
	
}
