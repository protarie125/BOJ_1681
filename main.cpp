#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n, l;

bool containsL(int x) {
	while (0 < x) {
		const auto r = x % 10;
		if (r == l) {
			return false;
		}

		x /= 10;
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> l;

	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		auto next = ans + 1;
		while (!containsL(next)) {
			++next;
		}

		ans = next;
	}

	cout << ans;

	return 0;
}