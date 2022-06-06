#define UVA11005
#ifdef UVA11005close
#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int times, time = 1; int i; int nums, num; int in, left, temp = 2444444;  //vector <int>save_in; vector <int>res;
	int sum;
	cin >> times;
	while (time <= times) {
		cout << "Case " << time << ":" << endl;
		int cost[37] = { 0 };
		for (i = 0; i < 36; i++) {
			cin >> cost[i];
		}

		cin >> nums; num = 1;
		while (num <= nums) {

			cin >> in; int cha_in, save_in = in; //save_in.push_back(in);
			int now; int sum_all[37] = { 0 };
			for (now = 2; now <= 36; now++) {
				cha_in = in;
				sum = 0;
				while (cha_in != 0) {
					left = cha_in % now;
					sum += cost[left]; //cout << "sum: " << sum << endl;
					cha_in /= now; //cout << "in: " << cha_in << endl;
				}
				//cout << "temp: " << temp << endl;
				sum_all[now] = sum;
				//cout << now << " - sum: " << sum << endl;
				//cout << "res[ " << now << "]: " << res[now] << endl;
			}
			cout << "Cheapest base(s) for number " << save_in << ": ";
			temp = sum_all[2];
			for (i = 2; i <= 36; i++) {
				if (sum_all[i] <= temp) {
					temp = sum_all[i];
				}
			}

			for (i = 2; i <= 36; i++) {
				if (sum_all[i] == temp) {
					cout << i << " ";
				}
			}

			cout << endl;
			num++;
		}
		//cout << "Case " << time << ":" << endl;
		//for (i = 0; i < num; i++) {
		//	cout << "Cheapest base(s) for number " << save_in[i] << ": ";
		//	int k;
		//	for (k = 0; k < a[i]; k++) {
		//		cout << res[k];
		//	}
		//}

		cout << endl;
		time++;
	}




	system("pause");
	return(0);
}
#endif