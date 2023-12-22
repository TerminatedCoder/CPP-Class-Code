#include <iostream>
#include <bits/stdc++.h>
using namespace std;

enum year{
	jan, 
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	Dec
};

int main()
{
	int i;
	for(i=jan; i<=Dec; i++){
		cout<<i+1<<" ";
	}
}
