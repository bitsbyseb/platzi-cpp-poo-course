#include<iostream>
#include<string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person sebas = Person();
    Person *sebas2 = new Person();
    sebas2->name = ""; 
    sebas.name = "sebas";
    sebas.age = 18;
    cout << "name: " << sebas.name << endl;
    cout << "age: " << sebas.age << endl;

    Person *sebas1 = new Person();
    sebas1->name = "sebas";
    sebas1->age = 18;
    cout << "name: " << sebas1->name << endl;
    cout << "age: " << sebas1->age << endl;

    cout << "Persona size: " << sizeof(Person) << endl;
    
    cout << "sebas size:" << sizeof(sebas) << endl;
    
    cout << "&sebas size: " << sizeof(sebas1) << endl;
    
    cout << "&sebas1->name: " << &sebas1->name << " size: " << sizeof(&sebas1->name) << endl;
    
    cout << "&sebas1->age: " << &sebas1->age << " size: " << sizeof(&sebas1->age) << endl;
    
    cout << "sizeof sebas: " << sizeof(&sebas) << endl;
    cout << "sizeof &sebas: " << sizeof(&sebas1) << endl;

    delete sebas1;
    delete &sebas;
}