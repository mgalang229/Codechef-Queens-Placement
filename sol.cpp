#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// view the image in this repository for better understanding
		// based on the problem statement, there will be at most n - 2 queens
		// we will be putting the queens in the main diagonal but there is a
		// proper order: the first n - 3 queens will be put in consecutive order
		// but for the last queen, we need to skip 1 cell in the main diagonal
		// before finally placing it
		int queens = n - 3;
		int diff = n - 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) {
					if (queens > 0) {
						cout << 'Q';
						queens--;
					} else if (i + 1 == diff) {
						cout << 'Q';
					} else {
						cout << '.';	
					}
				} else {
					cout << '.';
				}
			}
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}
