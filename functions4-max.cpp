#include<iostream>
using namespace std;
// create function
int max(int a, int b, int c);
// define function
int max(int a, int b, int c) 
{
	if (a > b  && a > c)
		return a;
	else if 
		(b > a && b > c)
		return b;
	else 
	 return c;
}
int main() {
	int a, b, c;
		cout << "Key in 3 numbers to find the greater one of them " << endl;
		cin >> a >>  b >> c;
		int d = max(a, b, c);
		cout << " The greatest number is :" << d << endl;
		return 0;
	}