#include<iostream>
using namespace std;
int main()
{
	cout << "Ex1" << ' ';
	cout << sizeof(int) << ' ';
	cout << sizeof(short int) << ' ';
	cout << sizeof(long long int) << ' ';
	cout << sizeof(float) << ' ';
	cout << sizeof(double) << ' ';
	cout << sizeof(long double) << ' ';
	cout << sizeof(char) << ' ';
	cout << sizeof(bool) << ' ';
	cout << endl;

	cout << "Ex2" << ' ';

	int value;
	cin >> value;
	unsigned int order = sizeof(int) * 8;
	unsigned int mask = 1 << order - 1;
	for (int i = 1; i <= order; i++)
	{
		putchar(value & mask ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}
	}
	cout << endl;

	cout << "Ex3" << ' ';

	union {
		float pi = 3.14;
		int n;
	};
	mask = 1 << order - 1;
	for (int i = 1; i <= order; i++)
	{
		putchar(n & mask ? '1' : '0');
		n <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}
	}
	cout << endl;
	cout << "Ex4" << ' ';
	union {
		double pi_1;
		int b[2];
	};
	mask = 1 << order - 1;
	for (int a = 0; a <= 1; a++){ 
		for (int i = 1; i <= order; i++)
		{
			putchar(b[a] & mask ? '1' : '0');
			b[a] <<= 1;
			if (i % 8 == 0)
			{
				putchar(' ');
			}
			if (i % order - 1 == 0)
			{
				putchar(' ');
			}
		}
	}
	cout << endl;
	return 0;
}