// code_01_sizeof.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

void Print1()
{
	cout << "所有内置类型所占空间的大小:" << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;
	cout << "sizeof(char16_t) = " << sizeof(char16_t) << endl;
	cout << "sizeof(char32_t) = " << sizeof(char32_t) << endl;
	cout << "sizeof(short) = " << sizeof(short) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(long long) = " << sizeof(long long) << endl;
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(long double) = " << sizeof(long double) << endl;
	cout << "========================================" << endl;
}

void Print2()
{
	int x[10];
	int *p = x;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "sizeof(*x) = " << sizeof(*x) << endl;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(*p) = " << sizeof(*p) << endl;
	cout << "========================================" << endl;
}


int main()
{
	Print1();

	Print2();
	system("pause");
	return 0;
}

