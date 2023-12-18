#include <iostream>
using namespace std;

int my_sum(int a, int b);

int main()
{
	cout << "this line won't make a conflict\n";
	cout << "Can you guess why?\n";
	cout << "hello student!\n";
	cout << "let's try new concepts";
	cout << "Learning git is fun";
	cout << sum(2, 4);
}

int my_sum(int a, int b)
{
	return a + b;
}

