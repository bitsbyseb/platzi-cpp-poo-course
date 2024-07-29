#include <iostream>

using namespace std;

int main()
{
    int option = 0;
    cout << "please give an option using numbers:" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "option 1";
        break;
    case 2:
        cout << "option 2";
        break;
    default:
        cout << "there's no an option for that value";
        break;
    }
}