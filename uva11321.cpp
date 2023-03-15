#define uva11321
#ifdef uva11321

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

struct num {
	int n, r;
	bool ifodd;
};

bool com(num a,num b) {
	bool flag = false;
	if (a.r < b.r) flag = true;
	else if (a.r == b.r) {
		if (a.ifodd && !b.ifodd) flag = true;
		else if (!a.ifodd && b.ifodd) flag = false;
		else if (a.ifodd && b.ifodd) flag = (a.n > b.n);
		else flag = (a.n < b.n);
	}
	return flag;
}

int main(void) {
	/*version 1*/
	/*
	int M, N;
	while ((cin >> N >> M) && (N != 0 && M != 0)) {
		int num;
		int i, j;
		int odd_num = 0, even_num = 0, mino_num = 0, mine_num = 0;
		vector<int> sodd, seven, smino, smine;

		for (i = 0; i < N; i++) {
			cin >> num;

			if (num % 2) {
				if (num >= 0) {
					sodd.push_back(num);
					odd_num++;
				}
				else {
					smino.push_back(num);
					mino_num++;
				}
			}
			else {
				if (num >= 0) {
					seven.push_back(num);
					even_num++;
				}
				else {
					smine.push_back(num);
					mine_num++;
				}
			}
		}

		sort(sodd.begin(), sodd.end(), greater<int>());
		sort(seven.begin(), seven.end());
		sort(smino.begin(), smino.end(), greater<int>());
		sort(smine.begin(), smine.end());

		cout << N << " " << M << endl;

		for (j = -M; j < 1; j++) {
			for (i = 0; i < mino_num; i++) {
				if (smino[i] % M == j) {
					cout << smino[i] << endl;
				}
			}
			for (i = 0; i < mine_num; i++) {
				if (smine[i] % M == j) {
					cout << smine[i] << endl;
				}
			}
		}


		for (j = 0; j < M; j++) {
			for (i = 0; i < odd_num; i++) {
				if (sodd[i] % M == j) {
					cout << sodd[i] << endl;
				}
			}
			for (i = 0; i < even_num; i++) {
				if (seven[i] % M == j) {
					cout << seven[i] << endl;
				}
			}
		}
	}
	short a, b;
	cin >> a >> b;

	cout << 0 << " " << 0 << endl;



	return(0);
	*/

	/*version2*/;
	
	int M, N;	int input;

	while ((cin >> N >> M) && !(N == 0 && M == 0)) {
		vector<struct num> a2;
		int i;
		for (i = 0; i < N; i++) {

			cin >> input;
			num data;
			data.n = input;
			data.r = input % M;
			if (input % 2 != 0) {
				data.ifodd = true;
			}
			else {
				data.ifodd = false;
			}
			a2.push_back(data);
		}

		cout << N << " " << M << endl;
		sort(a2.begin(), a2.end(), com);
		for (i = 0; i < N; i++) {
			cout << a2[i].n << endl;
		}
		
		
	};


	cout << "0 0" << endl;
	return(0);
}



#endif // uva11321
