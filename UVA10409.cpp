#define UVA10409
#ifdef UVA10409close
#include<iostream>
using namespace std;

int main(void) {

	int top, bottom, east, west, north, south, temp;

	int T; int a = 0;

	char input[7]; int ans[500] = { ' ' };

	while (cin >> T && T)
	{
		top = 1; bottom = 6;
		north = 2; south = 5;
		east = 4; west = 3;

		while (T--)
		{
			cin >> input;

			temp = top;

			if (input[0] == 'n')
			{
				top = south;
				south = bottom;
				bottom = north;
				north = temp;
			}
			else if (input[0] == 'e')
			{
				top = west;
				west = bottom;
				bottom = east;
				east = temp;
			}
			else if (input[0] == 's')
			{
				top = north;
				north = bottom;
				bottom = south;
				south = temp;
			}
			else
			{
				top = east;
				east = bottom;
				bottom = west;
				west = temp;
			}
		}
		ans[a] = top;
		//cout << top << endl;
		a++;
	}
	int i;
	for (i = 0; i < a; i++) {
		cout << ans[i] << endl;
	}
	system("pause");
	return(0);
}




//int times, i; string ch; int ver[4] = { 2,1,5,6 }; int hor[3] = { 3,1,4 }; int now_top; int ans[1000] = { 0 };
//int k; int a = 0;
//while (cin >> times && times != 0) {
//	now_top = 1;
//	for (i = 1; i <= times; i++) {
//		cin >> ch;
//		if (ch == "north") {
//			for (k = 0; k < 4; k++) {
//				//cout << "ver[k]:" << ver[k] << endl;
//				//cout << "now_top:" << now_top << endl;
//				if (ver[k] == now_top) {
//					//cout << now_top << endl;
//					if (k == 3) { now_top = ver[0]; }
//					else { now_top = ver[k + 1]; }
//					hor[k] = now_top;
//					break;
//				}
//			}
//		}
//		else if (ch == "east") {
//			for (k = 0; k < 3; k++) {
//				//cout << "ver[k]:" << ver[k] << endl;
//				//cout << "now_top:" << now_top << endl;
//				if (hor[k] == now_top) {
//					//cout << now_top << endl;
//					if (k == 2) { now_top = hor[0]; }
//					else { now_top = hor[k + 1]; }
//					ver[k] = now_top;
//					break;
//				}
//			}
//		}
//		else if (ch == "south") {
//			for (k = 3; k >= 0; k--) {
//				//cout << "ver[k]:" << ver[k] << endl;
//				//cout << "now_top:" << now_top << endl;
//				if (ver[k] == now_top) {
//					//cout << now_top << endl;
//					if (k == 0) { now_top = ver[3]; }
//					else { now_top = ver[k - 1]; }
//					hor[k] = now_top;
//					break;
//				}
//			}
//		}
//		else if (ch == "west") {
//			for (k = 2; k >= 0; k--) {
//				//cout << "ver[k]:" << ver[k] << endl;
//				//cout << "now_top:" << now_top << endl;
//				if (hor[k] == now_top) {
//					//cout << now_top << endl;
//					if (k == 0) { now_top = hor[2]; }
//					else { now_top = hor[k - 1]; }
//					ver[k] = now_top;
//					break;
//				}
//			}
//		}

//	}
//	//cout << now_top << endl;
//	ans[a] = now_top;
//	a++;
//}
//for (i = 0; i < a; i++) {
//	cout << ans[i] << endl;
//}

//system("pause");
//return(0);
//}
#endif