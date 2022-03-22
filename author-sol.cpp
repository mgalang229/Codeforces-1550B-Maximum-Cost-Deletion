#include <bits/stdc++.h>

using namespace std;

void perform_test() {
	int n, a, b;
	string s;
	cin >> n >> a >> b >> s;
	int m = unique(s.begin(), s.end()) - s.begin(); // blocks of 0s and 1s
	
	// m / 2 + 1 = min no. of operations to delete the entire string
	//1111100000111111110000001111111
	//5 / 2 + 1 = 3
	
	// if the value of b is greater than or equal to 0, then delete the
	// characters one by one, otherwise delete the string in the minimum
	// number of operations
	
	cout << n * a + max(n * b, (m / 2 + 1) * b) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
