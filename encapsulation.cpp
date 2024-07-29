#include <iostream>
#include <string>
#include <vector>

using namespace std;
using vecstr = vector<string>;
class Pearson
{
    string name;
    vecstr options;
    int age;

public:
    Pearson(string pearson_name, int age, vecstr opts) : name(pearson_name), age(age), options(opts) {}
    ~Pearson()
    {
        cout << "destructor" << endl;
    }
    void greet()
    {
        cout << "Hello, i'm " << this->name << endl;
    }
};

int main()
{
    vecstr opts({"one", "two", "three"});
    Pearson sebastian("sebastian", 12, opts);
    Pearson *pearson2 = new Pearson("sdasd", 21, opts);
    sebastian.greet();
}