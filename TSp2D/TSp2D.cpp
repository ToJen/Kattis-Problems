/**
  @author TOMISIN JENROLA
  @date   AUG17-AUG-2016
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	clock_t start;
	double d;
	start = clock();


	int n, x, y;


	d = (clock() - start) / (double) CLOCKS_PER_SEC;
	cout << d << endl;

	return 0;
}

/////////////////////////// add header comments to other files made today