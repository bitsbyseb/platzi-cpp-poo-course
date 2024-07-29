#include <iostream>
#include <string>

using namespace std;

int main() {
    union number_letter {
        int number;
        char letter;
    };
    number_letter x = {'A'};
    cout << "x as number " << x.number << endl;
    cout << "x as letter " << x.letter << endl;
}