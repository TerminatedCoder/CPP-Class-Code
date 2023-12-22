#include <iostream>
using namespace std;
int main()
{
	char sym;
	cout<<"Enter a letter: ";
	cin>>sym;
	
	int ascii = sym;
	
	if(ascii >= 65 && ascii <=96){
		cout<<"Letter is capital";
	}
	else if(ascii >= 97 && ascii <=123){
		cout<<"Letter is small";
	}
	else
	{
		cout<<"Other symbol";
	}
}