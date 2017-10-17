#include <iostream>
using namespace std;

int maks (int a, int b);

int main () {
	int a,b;


	cout<<"nilai a: ";
	cin>>a;
	cout<<"nilai b: ";
	cin>>b;
	cout<<"nilai paling besar yaitu: " << maks (a,b);

return 0;
}

int maks (int a, int b) {if (a>b){return a;}else {return b;}

}