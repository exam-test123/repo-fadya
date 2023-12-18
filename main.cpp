#include <iostream>
using namespace std;

int sum(int a, int b, int c);

int main()
{
	cout << "this line won't make a conflict\n";
	cout << "Can you guess why?\n";
	cout << "hello student!\n";
	cout << "let's try new concepts";
	cout << "Learning git is fun";
	cout << sum(2, 4, 6);
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

