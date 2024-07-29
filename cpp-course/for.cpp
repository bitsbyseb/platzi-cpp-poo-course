#include <iostream>

using namespace std;

int main() {
    int limit;
    cout << "please write the limit of the loop" << endl;
    cin >> limit;
    for (int i = 0; i < limit+1; i++) {
        cout << i << endl;
    }

    // getting the value of each element in an array

    int numbers[] = {10,23,54,12,54,43};
    int limit = sizeof(numbers)/sizeof(numbers[0]);
    for (int e = 0; e < limit;e++) {
        if (numbers[e] == 12) {
            break;
        } else {
            cout << "index: " << e << " element: " << numbers[e] << endl;
        }
    }

    cout<< "odd numbers" << endl;

    for (int e = 0; e < limit;e++) {
        if ((numbers[e] % 2) == 0) {
            cout << "index: " << e << " element: " << numbers[e] << endl;
        }
    }
}