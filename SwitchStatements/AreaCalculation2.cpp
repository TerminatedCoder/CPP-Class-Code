#include <iostream>
using namespace std;
int main()
{
	char shape, op;
	
	cout<<"Enter the shape(1. Rectangle, 2. Squre, 3. curcle, 4. Tringle): ";
	cin>>shape;
	
	int h, w, r, side, b;
	
	switch(shape){
		case '1':
			cout<<"Enter the height and width: ";
			cin>>h>>w;
			cout<<"Area of the Rectangle is: "<<h*w;
			break;
		case '2':
			cout<<"Enter Side length: ";
			cin>>side;
			cout<<"Area of the Squre is: "<<side*side;
			break;
		case '3':
			cout<<"Enter the radius : ";
			cin>>r;
			cout<<"Area of the Curcle is: "<<(3.14*r*r);
			break;
		case '4':
			cout<<"Enter the Base and Height: ";
			cin>>b>>h;
			cout<<"Area of the Tringle is: "<<(1/2*b*h);
			break;
			
		default:
			cout<<"Calculate himself(-_-)";
			break;
		
	}
}
