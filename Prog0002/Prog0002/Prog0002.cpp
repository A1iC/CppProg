// Prog0002.cpp :习题1.9，1.11

#include "pch.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	//编写程序，使用WHILE循环将50到100的整数相加。
	int sum = 0;
	int a = 50, b = 100;
	while (a <= b) {
		sum += a;
		++a;
	}
	cout << sum << endl;
	//编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
	int c, d;
	cout << "Please input two integers: ";
	cin >> c >> d;
	while (c <= d) {
		cout << c << " ";
		++c;
	}
	cout << endl;

	return 0;
}




