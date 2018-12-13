// Prog0003.cpp : 习题1.12，1.13

#include "pch.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i) {
		sum += i;
	}
	cout << sum << endl;
	int sum1 = 0;
	for (int j = 50; j <= 100; ++j) {
		sum1 += j;
	}
	cout << sum1 << endl;
	int a, b;
	cout << "Please input two integers: ";
	cin >> a >> b;
	for (; a <= b; ++a) {
		cout << a << " ";
	}
	cout << endl;
	return 0;
}




