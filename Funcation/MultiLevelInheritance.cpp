#include <iostream>
using namespace std;

class Operation{
	public:
		void sum(int a, int b){
		
			cout<<a+b<<endl;
		}
		void sub(int a, int b){
		
			cout<<a-b<<endl;
		}
};

class calc{
	public:
		void multi(int a, int b){	
			cout<<a*b<<endl;
		}
		void devi(int a, int b){
		
			cout<<a/b<<endl;
		}
};

class cals:public calc,public  Operation{
	
};

int main()
{
	cals Obj;
	Obj.sum(10,20);
	Obj.sub(10,20);
	Obj.multi(10,20);
	Obj.devi(10,20);
}
