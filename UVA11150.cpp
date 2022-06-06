#define UVA11150
#ifdef UVA11150close
#include<iostream>
using namespace std;

int main(void) {
	int in; int emp, num;
	int now; int ans;
	while (cin >> in) {
		now = in + 1;
		ans = in; emp = 0; num = -1;
		while (num != 1 && num != 0) {
			//cout << "now:" << now << endl;

			emp = 0;
			emp = now % 3;
			//cout << "emp:" << emp << endl;
			num = now / 3;
			//cout << "num:" << num << endl;
			ans += num;
			now = num + emp;
			//cout << endl << endl;
		}
		if ((num + emp) == 3) { ans++; }
		cout << ans << endl;
	}
	system("pause");
	return(0);
}
#endif // UVA11150
