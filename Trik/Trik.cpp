#include <iostream>

using namespace std;

int main()
{
	string moves;
	cin >> moves;

	int pos=1;

	for(char& c : moves) {
		switch(c)
		{
			case 'A':
				if(pos==1) pos = 2;
				else if(pos==2) pos = 1;
			break;
			case 'B':
				if(pos==2) pos = 3;
				else if(pos==3) pos = 2;
			break;
			case 'C':
				if(pos==1) pos = 3;
				else if(pos==3) pos = 1;
			break;
			default:
				pos = 1;
		}
	}

	cout << pos << endl;

	return 0;
}