#include<cstdio>
using namespace std;
int main() {
    int n, m;
    while (scanf_s("%d %d", &n, &m) && n + m != 0) {
        double sum = 0;
        for (int i = n; i <= m; i++) {
            sum += 1.0 / i / i;
        }
        printf("%.5lf\n", sum);
    }
    return 0;
}