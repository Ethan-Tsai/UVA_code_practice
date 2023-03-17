#define uva10903
#ifdef uva10903

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

struct data {
	float p_wintime[100] = { 0.0 };
	float p_losetime[100] = { 0.0 };
	int num;
};
int main(void) {
	int x,i;
	int n, k,time=0;

	vector<float>s2;
	
	while (cin >> n && n != 0 && cin >> k) {
		time++;
		
		struct data input;
		input.num = n;
		for (i = 0; i < k * n * (n - 1) / 2; i++) {
			int p1, p2;
			char hand1[9], hand2[9];
			cin >> p1; cin >> hand1;
			cin >> p2; cin >> hand2;

			switch (hand1[0]){
			case 'r':
				switch (hand2[0])
				{
				case 'p':
					input.p_wintime[p2]++;
					input.p_losetime[p1]++;
					break;
				case 's':
					input.p_wintime[p1]++;
					input.p_losetime[p2]++;
					
					break;
				default:
					break;
				}
				break;
			case 'p':
				switch (hand2[0])
				{
				case 's':
					input.p_wintime[p2]++;
					input.p_losetime[p1]++;
					break;
				case 'r':
					input.p_wintime[p1]++;
					input.p_losetime[p2]++;
					break;
				default:
					break;
				}
				break;
			case 's':
				switch (hand2[0])
				{
				case 'r':
					input.p_wintime[p2]++;
					input.p_losetime[p1]++;
					break;
				case 'p':
					input.p_wintime[p1]++;
					input.p_losetime[p2]++;
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}
		}
		for (i = 1; i <= n; i++) {
			if (!(input.p_wintime[i] == 0 && input.p_losetime[i] == 0)) {
				
				//cout << setprecision(1) << fixed << setprecision(3) << input.p_wintime[i] / (input.p_losetime[i] + input.p_wintime[i]) << endl;
				s2.push_back(input.p_wintime[i] / (input.p_losetime[i] + input.p_wintime[i]));
			}
			else {
				//cout << "-" << endl;
				s2.push_back(-1);
			}
		}
		//cout << endl;
		s2.push_back(-2);
		
	}
	s2.pop_back();
	for (i = 0; i < s2.size(); i++) {
		if (s2[i] == -1)cout << "-" << endl;
		else if (s2[i] == -2)cout << endl;
		else cout << setprecision(1) << fixed << setprecision(3)<<s2[i] << endl;
	}
	
	return(0);
}


#endif // uva10903
