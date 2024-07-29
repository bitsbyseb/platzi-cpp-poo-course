#include<iostream>

using namespace std;

int main() {
    do
    {
        char response;
        cout << "do you wanna exit?" << endl;
        cin >> response;

        if (response == 'y') {
            break;
        }
    } while (true);
    
}