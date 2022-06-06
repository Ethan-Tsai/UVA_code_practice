#define UVA129592
#ifdef UVA129592close
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int J = 1, R = 1; int in;

	while (J != 0 && R != 0)
	{
		scanf_s("%d %d", &J, &R);
		/*	if (J == 0 && R == 0) {
				break;
			}*/
		int max = 1;
		if (J != 0 || R != 0) {

			int k; int x;
			for (x = 0; x < J * R; x++) {

				scanf_s("%d", &in);
				if (J != 1) {
					for (k = 0; k < J; k++) {
						int temp = 0;
						if (in > temp) {

							temp = in;
							max = k + 1;
						}

					}
				}
				else if (J == 1) {
					for (k = 0; k < R; k++) {
						int temp = 0;
						if (in >= temp) {

							temp = in;
							max = k + 1;
						}

					}
				}
			}

		}
		printf("%d\n", max);


	}
	return(0);

}
#endif