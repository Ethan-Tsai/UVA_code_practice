#define cc
#ifdef ccc
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {

	int times, i, D, M;
	int day = 0; int k;
	scanf_s("%d", &times);
	char WEEK[10][10] = { "Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday", "Sunday" };
	int mday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (i = 0; i < times; i++) {
		scanf_s("%d %d", &M, &D);
		day = 4;
		for (k = 1; k < M; k++) {
			day += mday[k - 1];
		}

		day += D;
		day = day % 7;
		printf("%s\n", WEEK[day]);
	}
	system("pause");
	return(0);
}
#endif