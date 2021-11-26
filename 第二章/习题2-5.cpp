#include<stdio.h>
int main() {
	int _number[9] = { 0 }, i, j, k, abc, def, ghi;
	int flag;
	for (i = 123; i <= 329; i++) {
		flag = 0;
		abc = i;
		def = 2 * abc;
		ghi = 3 * abc;
		_number[0] = abc % 10; _number[1] = abc / 10 % 10; _number[2] = abc / 100;
		_number[3] = def % 10; _number[4] = def / 10 % 10; _number[5] = def / 100;
		_number[6] = ghi % 10; _number[7] = ghi / 10 % 10; _number[8] = ghi / 100;
		for (j = 0; j < 9; j++) {
			for (k = 0; k < 9; k++)
				if (j == k) 
					continue;
				else {
					if (_number[j] == _number[k]) {
						flag = 1; break;
					}
					else continue;
				}
			if (flag == 1)
				break;
			else continue;
		}
		if (flag == 0)
			printf("%d %d %d\n", abc, def, ghi);
		else continue;
	}
	return 0;
}
