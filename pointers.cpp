#include<iostream>

using namespace std;

void change(char *c) {
    cout << "the actual character is: " << *c << endl;
    *c = 'A';
    cout << "the actual character is: " << *c << endl;
}

int main(int argc,char const *argv[]) {
    char letter = 'A';
    char *pointer = &letter;
    cout << (int*) &letter << endl;
    cout << (int*) pointer << endl;
    cout << *pointer << endl;
    char character = 'F';
    change(&character);
    cout << "the actual character is: " << character << endl;
    cout << "char direction is: " << (int*) &character;

    int numbers[] = {1,2,3,4,5,6,7};
    int numbers_length = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i< numbers_length;i++) {
        int *pointer = &numbers[i];
        cout << endl << "number(" << numbers[i] << ") and its direction is: " << (int*) pointer << endl;
    }

    char *text3 = (char *)"hola";
    cout << text3;
}