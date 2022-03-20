#include <iostream>
#include<cstring>

using namespace std;

int main(void)
{
	char arr[100] = "힘들다 살려줘";
	char str[100] = "help";

	cout << arr << endl;
	cout << strlen(arr)<<endl;

	strcat_s(arr, str);
	cout << arr << endl;

	strcpy_s(str, arr);
	cout << str << endl;
	cout << arr << endl;

	cout<<strcmp(str, arr)<<endl;

	return 0;
}
