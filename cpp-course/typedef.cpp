#include<iostream>

using namespace std;
int main() {
    string name;
    int age;
    cout << "write your name:";
    getline(cin >> ws,name);
    cout << "write your age:";
    cin >> age;

    cout << "your name is "<< name << endl;
    cout << "your age is "<< age;

}