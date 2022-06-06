#define UVA10050
#ifdef UVA10050close

#include<iostream>
using namespace std;

int main(void) {

	int times;	int time = 1; int num; int res[512] = { 0 }; int i;
	cin >> times;
	while (time <= times) {

		int days, parties;
		cin >> days;
		cin >> parties;
		int pd[101] = { 0 }; int har[3651] = { 0 };
		for (i = 0; i < parties; i++) {
			cin >> pd[i];
		}
		for (i = 0; i < parties; i++) {
			int index;
			for (index = 1; index <= days; index++) {
				if (index % 7 != 0 && index % 7 != 6) {
					if (index % pd[i] == 0) {
						har[index - 1] = 1;
					}
				}
			}

		}
		num = 0;
		for (i = 0; i < days; i++) {
			if (har[i] == 1) {
				num++;
			}
		}
		res[time - 1] = num;

		time++;
	}

	for (i = 0; i < times; i++) {
		cout << res[i] << endl;
	}



	system("pause");
	return(0);
}
#endif