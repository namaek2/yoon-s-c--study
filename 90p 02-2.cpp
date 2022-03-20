#include <iostream>
using namespace std;

int main(void)
{
	const int num1 = 12;

	const int * ptr1 = &num1;
	const int * (&ref1) = ptr1;

	const int num2 = 12;

	const int * ptr2 = &num2;
	const int &ref2 = * ptr2;
	

	cout << *ref1<<" "<<*ptr1 << endl;
	cout << ref2<<" "<<*ptr2 << endl;



	return 0;
}
