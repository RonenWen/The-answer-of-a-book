#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>20) return 0;
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