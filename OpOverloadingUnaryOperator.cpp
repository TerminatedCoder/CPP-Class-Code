#include <iostream>

class distance{
	public:
		int feet, inch;
		
		distance(int f, int i){
			this->feet=f;
			this->inch=i;
		}
		
		
		void operator-(){
			feet--;
			inch--;
			std::cout<<"\n Feet & inchs(decrement): "<<feet<<" "<<inch;
		}
};

int main()
{
	distance d1(8,9);
	-d1;
	return 0;
}
