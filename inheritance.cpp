#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
public:
    string food;
    static int number_animals;
    Animal()
    {
        cout << "creating animal instance" << endl;
        Animal::number_animals++;
    }
    ~Animal()
    {
        cout << "deleting animal instance" << endl;
        Animal::number_animals--;
    }
    void eat()
    {
        cout << "Animal is eating " << this->food << endl;
    }
    static int getAnimalCount()
    {
        return Animal::number_animals;
    }
};
int Animal::number_animals = 0;

class Herbivore : public Animal
{
public:
    Herbivore() : Animal()
    {
        this->food = "plants";
    }
};

class Carnivore : public Animal
{
public:
    Carnivore() : Animal()
    {
        this->food = "meat";
    }
    void hunt()
    {
        cout << "this animal is hunting" << endl;
    }
};

/** when we are using multiple inheritance, the new instance from
 that class is going to create a new instance per class base,so,
 the omnivore class creates two new instances, they are Carnivore and
 Herbivore.
 ```cpp
    Omnivore *human = new Omnivore();
    human->Carnivore::eat();
    human->Herbivore::eat();
    human->eat();
 ```
 **/
class Omnivore : public Carnivore, public Herbivore
{
public:
    Omnivore() : Carnivore(), Herbivore() {}
    void eat(Animal *animal_type)
    {
        cout << "this animal can eat " << animal_type->food << endl;
    }
};

int main()
{
    Animal *dog = new Animal();
    cout << dog->getAnimalCount() << endl;
    cout << dog->getAnimalCount() << endl;
    dog->eat();
    Herbivore *horse = new Herbivore();
    Carnivore *lion = new Carnivore();
    lion->hunt();
    Omnivore *human = new Omnivore();
    human->Carnivore::eat();
    human->Herbivore::eat();
    human->eat(lion);
    cout << Animal::getAnimalCount() << endl;
    // delete dog;
}