#include<iostream>

int squareByValue(int);
void squareByReference(int&);
using namespace std;

int main()
{
	int x = 2;
	int z = 4;
	cout<<"用squareByValue求平方"<<squareByValue(x)<<endl;
	cout<<"用squareByReference求平方"<<squareByReference(x)<<endl;
	
	squareByReference(z);
	cout<<z<<endl;
}
int squareByValue(int a) {return a*=a;}
void squareByReference(int &a) {a*=a;}
