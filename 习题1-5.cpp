#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;//n is the total of the cloths
	cin >> n;//input the number of the cloths
	if (95 * n >= 300)
		cout << 95 * n * 0.85;
	else
		cout << 95 * n;
	return 0;
}
