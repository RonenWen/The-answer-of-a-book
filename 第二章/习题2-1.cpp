#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	for (int n = 100; n <= 999; n++)
	{
		int a = 0, b = 0, c = 0;//分别是个位、十位、百位
		a = n % 10;
		b = (n / 10) % 10;
		c = n / 100;
		if (a * a * a + b * b * b + c * c * c == n)
			cout << n << endl;
	}
	return 0;
}