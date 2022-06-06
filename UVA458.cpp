#define UVA458
#ifdef UVA458close
#include<iostream>
#include<string>

using namespace std;

int main(void) {
	string ch = { 0 }; int i;
	while (getline(cin, ch)) {

		for (i = 0; i < ch.length(); i++) {
			ch[i] = ch[i] - 7;
		}
		for (i = 0; i < ch.length(); i++) {
			cout << ch[i];
		}
		cout << endl;
	}
	return(0);
}
#endif