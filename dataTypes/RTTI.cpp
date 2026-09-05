#include <any>
#include <iostream>
#include <typeinfo>

class Animal {
public:
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void bark() const {
        std::cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void meow() const {
        std::cout << "Meow!\n";
    }
};

int main() {
    // -------------------------
    // RTTI with typeid
    // -------------------------

    Dog dog;

    Animal* animal = &dog;

    if (typeid(*animal) == typeid(Dog)) {
        std::cout << "animal points to a Dog\n";
    }


    // -------------------------
    // RTTI with dynamic_cast
    // -------------------------

    Dog* dog_ptr = dynamic_cast<Dog*>(animal);

    if (dog_ptr != nullptr) {
        dog_ptr->bark();
    }


    // Try casting to the wrong type.

    //Cat* cat_ptr = dynamic_cast<Cat*>(animal);

    //if (cat_ptr == nullptr) {
        //std::cout << "animal is not a Cat\n";
    //}
}
