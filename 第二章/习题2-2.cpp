#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int sum = 1;
    int a, b, c;
    while (scanf_s("%d%d%d", &a, &b, &c) == 3)
    {
        for (int i = 10; i <= 101; i++)
        {
            if ((i % 3 == a && i % 5 == b && i % 7 == c)&&i<=100)
            {
                cout << "Case " << sum << " : " << i << endl;
                break;
            }
            if (i == 101)
                cout << "Case " << sum << " : No Answer" << endl;
        }
        sum++;
    }
    return 0;
}