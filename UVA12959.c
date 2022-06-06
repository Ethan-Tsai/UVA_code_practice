#define aa
#ifdef aaa


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int J, R;
	while (scanf_s("%d %d", &J, &R) && J && R) {
		int vp[512] = { 0 };
		int win = 0, temp = 0; int i;

		for (i = 0; i < J * R; i++) {
			scanf_s("%d", &temp);
			int now = i % J;
			vp[now] += temp;
			if (vp[now] >= vp[win]) {
				win = now;
			}
		}
		printf("%d\n", win + 1);
	}
	return(0);
}
#endif  



