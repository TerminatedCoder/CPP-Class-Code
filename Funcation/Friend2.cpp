#include <iostream>
using namespace std;
class calc{
	int a,b;
	
	public:
		friend void add(calc obj);
		void setValue(int p,int q){
			a=p;
			b=q;
		}
};

void add(calc obj){
	cout<<"Addition is "<<obj.a+obj.b;
}


int main()
{
	int a,b;
	cout<<"Enter the value for a and b: ";
	cin>>a>>b;
	calc o;
	o.setValue(a,b);
	
	add(o);
}
