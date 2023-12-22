#include <iostream>
using namespace std;
int main()
{
	int n,i, sum=0;
	cout<<"Input a number of terms: ";
	cin>>n;
	for(int i=1; i<=n;i++){
		sum=sum+i;
	}
	cout<<"\n The sum of the natural numbers is: "<<sum<<endl;
}
