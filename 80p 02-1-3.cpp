#include <iostream>
using namespace std;

void SwapPointer(int *(&n1), int* (&n2))
{
	int *n = n1;
	n1 = n2;
	n2 = n;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << " " << *ptr2 << endl;
	SwapPointer(ptr1, ptr2);
	cout << *ptr1 <<" "<< * ptr2 << endl;
	return 0;
}
