/**
  @author TOMISIN JENROLA
  @date   22-AUG-2016
*/

#include <iostream>
#include <limits.h>

using namespace std;

int sumDigits(int n)
{
	int sum=0;
	while(n>0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int findP(int n)
{
	int sum = sumDigits(n);
	int p = INT_MAX;
	for(int i=11; i<=100; ++i) {
		if( (sumDigits(i*n)==sum) && (i<p) ) p = i;
	}
		return p;
}

int main()
{

	int n;
	while(cin >> n) {
		if(n==0) break;
		cout << findP(n) << "\n";
	}

	return 0;
}