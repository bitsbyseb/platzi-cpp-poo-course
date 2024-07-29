#include <iostream>
#include <string>

using namespace std;

class Pearson
{
    string name;
    int age;
public:
    static int people_count;
    Pearson(string name, int age);
    Pearson &setName(string new_name)
    {
        this->name = new_name;
        return *this;
    }

    Pearson &setAge(int new_age)
    {
        this->age = new_age;
        return *this;
    }
    void greet();
};

int Pearson::people_count = 0;

Pearson::Pearson(string name,int age)
{
    this->name = name;
    this->age = age;
    people_count++;
}

void Pearson::greet()
{
    cout << "Hello,i'm " << this->name << " and i'm " << this->age << " years old" << endl;
}

int main()
{
    Pearson sebastian("sebastian", 18);
    sebastian.greet();
    sebastian.setName("sebas").setAge(19);
    sebastian.greet();
    Pearson *pearson2 = new Pearson("sebas",23);
    Pearson *pearson3 = new Pearson("sebas",23);
    Pearson *pearson4 = new Pearson("sebas",23);
    cout << Pearson::people_count << endl;
}