#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll r, c, ans;

void decode() {
	cin >> r >> c;
	if(r % 2 == 1) {
		ans = ((r - 1) / 2) * 10;
	}
	else {
		ans = ((r - 1) / 2) * 10 + 1;
	}
	ans = ans + 2 * (c - 1);
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
