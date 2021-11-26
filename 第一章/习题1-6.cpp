#include<iostream>
#include<algorithm>//算法库
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int t = 0;
	if (a > b) {t = a; a = b; b = t;}
	if (a > c) { t = a; a = c; c = t;}
	if (b > c) { t = b; b = c; c = t; }
	if (a * a + b * b == c * c)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
//This is a better way to finish this problem
void quick_way()
{
	int x[4]={0};
	for(int i=0;i<=2;i++)
		cin>>x[i];
	sort(x,x+2);
	if(x[0]*x[0]+x[1]*x[1]==x[2]*x[2])
	 	cout << "yes";
	else
		cout << "no";
	return 0;
}
