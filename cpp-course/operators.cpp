#include<iostream>

using namespace std;

int main() {
    int a = 4;
    int b = 3;
    int c = a*b;
    bool isBigger = a < b;
    a+=4;
    cout << c << endl;
    cout << a << endl;
    cout << isBigger << endl;

    cout << "size of a=" << a << ":" << sizeof(a) << endl;

    // sizeof with lists
    // get the length of a list
    int ages[] = {34,2,5,1,6,4};
    cout << "ages length = " << sizeof(ages)/4 << endl;
}