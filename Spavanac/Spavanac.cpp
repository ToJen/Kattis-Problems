#include <iostream>
#include <ctime>

using namespace std;

int main()
{

	/*clock_t start;
	double dur;
	start = clock();*/

	int h, m;
	cin >> h >> m;

	if(m<45) {
		if(h==0) h = 24;
		cout << --h << " " << (60-(45-m)) << endl;
	}
	else {
		cout << h << " " << (m-45) << endl;
	}




	/*dur = ( clock() - start);// /  (double) CLOCKS_PER_SEC;
	cout << "duration: " << dur << endl;*/

	return 0;
}