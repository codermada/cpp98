#include <iostream>

class   Animal
{
public:
    std::string type;
    virtual void    makeSound(void) const
    {
        std::cout << "Making sound" << std::endl;
    }
    virtual ~Animal()
    {
        std::cout << "Animal destructor called" << std::endl;
    }
};

class   Dog: public Animal
{
public:
    std::string type;
    void    makeSound(void) const
    {
        std::cout << "Woof woof" << std::endl;
    }
    ~Dog()
    {
        std::cout << "Dog destructor called" << std::endl;
    }
};

class   Cat: public Animal
{
public:
    std::string type;
    void    makeSound(void) const
    {
        std::cout << "Meow meow" << std::endl;
    }
    ~Cat()
    {
        std::cout << "Cat destructor called" << std::endl;
    }
};

int main()
{
    Animal  *animal = new Animal();
    Animal  *cat = new Cat();
    Animal  *dog = new Dog();
    animal->makeSound();
    cat->makeSound();
    dog->makeSound();
    delete animal;
    delete cat;
    delete dog;
    return (0);
}