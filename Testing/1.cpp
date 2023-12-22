#include <iostream>
using namespace std;

class first{
	public:
		int a=10;
		int b=9;
	
	int fun(){
		return a+b;
	}
};

class second: public first{
	
};
class third: public second{
	
};
int main()
{
	third o;
	cout<<o.fun();
}
