// agar vistual nhi toh voh sirf jo base class hai usko show karega, jo derieved class ne changes kiye that will be ignored 
#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    virtual void  eat() {
        cout << "This animal eats food." << endl;
    }
    virtual void sound() {
        cout << "Animal sound!" << endl;
    }
};


class Dog : public Animal {
public:
    // Override sound method
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void eat() override{
        cout << "This animal eats sea food." << endl;
    }
   
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();  
    Animal* animal2 = new Cat();  

    // Calling base class method
    animal1->eat();
    animal2->eat();

    // Polymorphic behavior
    animal1->sound();
    animal2->sound();

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}
