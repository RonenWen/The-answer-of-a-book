#include<iostream>

using namespace std;
int main()
{
	double f;
	scanf_s("%lf", &f);
	double c = (5 * (f - 32)) / 9;
	printf_s("%.3lf", c);
	return 0;
}
