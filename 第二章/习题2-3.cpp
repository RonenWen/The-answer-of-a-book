#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >=1; i--)
    {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int a = 1; a <= (2 * i - 1); a++)
            cout << "#";
        cout << endl;
    }
    return 0;
}