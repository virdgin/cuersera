#include <iostream>
#include<map>
#include<string>
#include<set>
using namespace std;

int main() {
	int Q;
	map<string, string> dictionary;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		string input;
		cin >> input;
		if (input == 'CHANGE_CAPITAL') {
			string country, capital;
			cin >> country >> capital;
			if (dictionary.count(country) == 0) {
				cout << "Introduce new country " << country << " with capital " << capital << endl;
			}
			else { const string& old_capital=dictionary[capital];
			if (old_capital == capital) {
				cout << "Country " << country << " hasn't changed its capital" << endl;
			}
			else cout << "Country " << country << " has changed its capital from " << old_capital << " to " << capital << endl;
			}
			dictionary[country] = capital;
		}
		if (input == 'RENAME') {

		}
	}
	

return 0;
}