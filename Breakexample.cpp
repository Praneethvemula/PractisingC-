#include <iostream>
using namespace std;

int main() {
    int i;

    for ( i = 1; i <= 10; i++) {

        if (i == 5) {
            break;   // Stop the loop when i becomes 5
        }

        cout << i << endl;
    }

    return 0;
}