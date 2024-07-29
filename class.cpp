#include<iostream>
#include<string>
#include<vector>

using namespace std;
using vecstr = vector<string>;
class Pearson {
    public:
        string name;
        vecstr options;
        int age;
    Pearson(string pearson_name,int age,vecstr opts) {
        this->name = pearson_name;
        this->age = age;
        this->options = opts;
    }
    ~Pearson() {
        cout << "destructor" << endl;
    }
    void greet() {
        cout << "Hello, i'm " << this->name << endl;
    }
};

int main() {
    vecstr opts({"one","two","three"});
    Pearson sebastian("sebastian",12,opts);
    sebastian.greet();
}