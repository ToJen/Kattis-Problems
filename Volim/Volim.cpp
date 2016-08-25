/**
  @author TOMISIN JENROLA
  @date   25-AUG-2016
*/

#include <iostream>

using namespace std;

int main()
{

	int pos, num, curr, sum=0;
	char s;
	cin >> pos >> num;

	while(sum<210) {
		cin >> curr >> s;
		sum += curr;
		if(s=='T' && sum<=210) {
			pos =  (pos%8) + 1;	// go to next player if correct
		}	
	}
	cout << pos << endl;

	return 0;
}