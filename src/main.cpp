#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int b, n;
	cin >> b >> n;
	while (0 != b || 0 != n) {
		auto a = int{ 1 };
		auto an = static_cast<int>(pow(a, n));
		auto diff = b - an;
		while (0 < diff) {
			++a;
			an = static_cast<int>(pow(a, n));
			diff = b - an;
		}

		if (0 == diff) {
			cout << a << '\n';
		}
		else {
			auto a2 = a - 1;
			auto a2n = static_cast<int>(pow(a2, n));
			auto diff2 = b - a2n;

			if (abs(diff) < diff2) {
				cout << a << '\n';
			}
			else {
				cout << a2 << '\n';
			}
		}

		cin >> b >> n;
	}

	return 0;
}