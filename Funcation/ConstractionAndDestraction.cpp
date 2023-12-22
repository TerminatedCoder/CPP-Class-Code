#include <iostream>
using namespace std;

class Z{
	public: 
		Z(){
			cout<<"Construction called"<<endl;
		}
		~Z(){
			cout<<"Destruction called"<<endl;
		}
};

int main()
{
	Z z1;
//		z1.Z::~Z();
}
