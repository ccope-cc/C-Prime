// Chapter_02.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

string NPowerOf2(int n) {
	string res("1");

	for (int i = 0; i < n; ++i) {
		int carry = 0, multi = 0;
		for (int j = res.size() - 1; j >= 0; --j) {
			int tmpNum = res[j] - '0';
			multi = (tmpNum << 1) + carry;
			carry = multi / 10;
			res[j] = (multi % 10) + '0';
		}
		if (carry > 0)
			res.insert(res.begin(), carry + '0');
	}
	return res;
}

void f(int * x)
{
	*x = 10;
}

void main() {
	int i = 15, j = 10, k = 3;
	k *= i + j;
	cout << k << endl;

	system("pause");
}
int main2()
{
	int n;
	while (cin >> n)
		cout << NPowerOf2(n) << endl;
	system("pause");
	return 0;
}


int main1()
{
	int n;
	int i, j;
	int MostNum = 0;
	while (cin >> n)
	{
		int *a = new int[n];
		for (i = 0; i < n; i++)//��ʼ��
		{
			a[i] = 0;
		}
		a[0] = 1;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				a[j] *= 2;
			}
			for (j = 0; j < n; j++)
			{
				if (a[j] > 9)
				{
					if (j > MostNum) 
						MostNum = j;//û����ǰ������ֻ��										
					a[j + 1] += 1;
					a[j] %= 10;
				}
			}
		}
		for (i = MostNum + 1; i >= 0; i--)
		{
			cout << a[i];
		}
	}
	system("pause");
	return 0;
}

