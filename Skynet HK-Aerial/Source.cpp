#include <iostream>
using namespace std;

int main() {
	
	cout << "Counting Forward:\n";
	//counts forward to less than ten
	for (int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}
	cout << "\n\nCounting backward:\n";
	// counts backwards less than ten
	for (int i = 9; i >= 0; --i)
	{
		cout << i << " ";
	}
	
}
