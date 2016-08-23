#include <iostream>

using namespace std;

int main()
{

	int pos, num, lim=210, curr, sum=0;
	string s;

	cin >> pos >> num;
	while(cin) {
		(pos==1) ? pos = 8 : pos--;
		cin >> curr >> s;
		// if(s!="T") {
			sum += curr;
		// }
		if(sum>=lim) {
			cout << pos << endl;
			break;
		}	
	}


	return 0;
}