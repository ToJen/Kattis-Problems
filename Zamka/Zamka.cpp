/**
  @author TOMISIN JENROLA
  @date   17-AUG-2016
*/

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

	int l, d, x, n=INT_MAX, m=0, sum=0;
	cin >> l >> d >> x;

	for(int i=l; i<=d; ++i) {
		string s = to_string(i);
		for(int j=0; j<s.length(); ++j) {
			sum += (s[j]- '0');
		}
		if(sum==x) {
			if(i < n) n = i;
			if(i > m) m = i;
		}
		sum=0;
	}
	
	cout << n << ' ' << m << endl;

	return 0;
}
