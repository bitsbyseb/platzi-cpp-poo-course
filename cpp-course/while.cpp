#include<iostream>

using namespace std;

int main() {
    while (true)
    {
        char response;
        cout << "do you wanna exit?" << endl;
        cin >> response;

        if (response == 'y') {
            break;
        }
    }
    
}