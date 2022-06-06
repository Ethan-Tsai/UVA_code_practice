#define UVA100
#ifdef UVA100close
#include<iostream>
using namespace std;

int main(void) {
	int in1, in2; int num1; int ans;
	while (cin >> in1 >> in2) {
		int i; int temp;
		ans = 0;
		if (in2 >= in1) {
			i = in1; temp = in1;
			while (i <= in2) {
				num1 = 1;
				while (i != 1) {
					if (i % 2 == 1) {
						i = i * 3 + 1;
					}
					else if (i % 2 == 0) {
						i = i / 2;
					}
					num1++;
				}
				if (num1 >= ans) {
					ans = num1;
				}
				temp++;
				i = temp;
			}
		}
		else {
			i = in2; temp = in2;
			while (i <= in1) {
				num1 = 1;
				while (i != 1) {
					if (i % 2 == 1) {
						i = i * 3 + 1;
					}
					else if (i % 2 == 0) {
						i = i / 2;
					}
					num1++;
				}
				if (num1 >= ans) {
					ans = num1;
				}
				temp++;
				i = temp;
			}
		}
		cout << in1 << " " << in2 << " " << ans << endl;

	}
	system("pause");
	return(0);
}
#endif