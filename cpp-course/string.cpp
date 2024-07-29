#include<iostream>
#include<string>

using namespace std;

int main() {
    char text[] = {'H','E','L','L','O','\0'};
    cout << text << endl;
    
    string text2 = "Hello World";
    string iiS = "2077";
    cout << text2 << endl;
    cout << text2.size() << endl;
    cout << stoi(iiS)+2 << endl;
}