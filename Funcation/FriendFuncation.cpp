#include <iostream>
using namespace std;

class fried{
	int a;	
		
	public:		
		friend void sum(fried f);
		void seta(int p){
			a=p;
		}
		
	
	
};
void sum(fried f){
	cout<<f.a;
}




int main()
{
	fried f;
	f.seta(99);
	sum(f);
}
