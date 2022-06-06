#define UVA110052
#ifdef UVA110052c
#include<iostream>
#include<string>
using namespace std;

void recost(void);
int cost[37] = { 0 };

int cha_in, save_in; int sum; int in, temp = 2044444444;

int cac(int, int);

int main(void) {
	int times, time = 1; int i; int nums, num;    //vector <int>save_in; vector <int>res;

	cin >> times;
	while (time <= times) {
		static int key = 0;
		if (key != time) {
			cout << "Case " << time << ":" << endl;
			key = time;
		}
		recost();
		int res[37] = { 0 };
		cin >> nums;	num = 1;
		while (num <= nums) {
			int now; int sum_all[37] = { 0 };
			cin >> in; save_in = in;
			for (now = 2; now <= 36; now++) {
				sum_all[now] = cac(now, in);
			}
			temp = sum_all[2];
			for (i = 2; i <= 36; i++) {
				if (sum_all[i] <= temp) {
					temp = sum_all[i];
				}
			}
			//cout << "temp: " << temp << endl;
			//for (i = 2; i <= 36; i++) {
			//	if (sum_all[i] == temp) {
			//		res[i] = i;
			//	}
			//}

			cout << "Cheapest base(s) for number " << save_in << ":";
			//while (i == 2 || i <= 36) {
			//	cout << res[i] << " ";
			//	i++;
			//}
			for (i = 2; i <= 36; i++) {
				if (sum_all[i] == temp) {
					cout << " " << i;
				}
			}

			cout << endl;
			num++;
		}
		if (time != times)
			cout << endl;
		time++;
	}

	system("pause");
	return(0);
}

void recost() {
	int i;
	for (i = 0; i < 36; i++) {
		cin >> cost[i];
	}
}

int cac(int now, int in) {
	int left;

	cha_in = in;
	sum = 0;
	while (cha_in != 0) {
		left = cha_in % now;
		sum += cost[left];
		cha_in /= now;

	}
	//cout << "sum: " << sum << endl;
	return(sum);

}
#endif