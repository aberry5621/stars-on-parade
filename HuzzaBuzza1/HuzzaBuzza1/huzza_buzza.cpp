// file: stars up and down.cpp
// written by: alex
// purpose: display increasing numbers of stars and decreasing

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int input_num = 0;

	cout << "star count" << endl;

	cout << "enter a number: ";
	cin >> input_num;

	for (int i = 1; i <= input_num; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}

	for (int i = input_num; i > 0; i--)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}

	return 0;
}
