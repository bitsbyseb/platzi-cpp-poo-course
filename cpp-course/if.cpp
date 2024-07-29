#include<iostream>

using namespace std;

int main() {
    // bool result = true || false;
    // cout << result << endl;
    int age;
    cout << "please give us your age:" << endl;
    cin >> age;

    if (age >= 18 && age <= 40) {
        cout << "you can vote";
    } else {
        cout<< "you cannot vote";
    }
    exit(0);
}