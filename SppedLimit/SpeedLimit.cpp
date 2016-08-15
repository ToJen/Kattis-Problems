#include <iostream>

using namespace std;

int main()
{

	int n, s, t, old=0, sum=0;
	cin >> n;
	while(n != -1) {
		for(int i=0; i<n; ++i) {
			cin >> s;
			cin >> t;
			int tmp = t;
			t -= old;
			sum = sum + (s*t);
			old = tmp;
		}
		cout << sum << " miles\n";
		old = 0;
		sum = 0;
		cin >> n;
	}

	return 0;
}