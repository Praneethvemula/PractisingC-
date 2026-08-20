#include <iostream>

using namespace std;

int main(void) {
	int a, i = 0;
	
	cout << "a = ";
	cin >> a;
	while(a != 1) {

		// increment steps counter
		i++;

		if(a % 2 == 0)
			// if it's even, evaluate a new c0 as c0
			a = a / 2;
		else
			// otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
			a = 3 * a + 1;
		cout << a << endl;
	}
	cout << "steps = " << i << endl;
	return 0;
}