#include <iostream>

class   IAnimal
{
public:
    std::string type;
    virtual void    makeSound(void) const = 0;
    virtual void    moving(void) const = 0;
    virtual ~IAnimal()
    {
        std::cout << "Animal destructor called" << std::endl;
    }
};

class   Dog: public IAnimal
{
public:
    std::string type;
    virtual void    makeSound(void) const
    {
        std::cout << "Woof woof" << std::endl;
    }
    virtual void    moving(void) const
    {
        std::cout << "The dog is moving" << std::endl;
    }
    ~Dog()
    {
        std::cout << "Dog destructor called" << std::endl;
    }
};

class   Cat: public IAnimal
{
public:
    std::string type;
    virtual void    makeSound(void) const
    {
        std::cout << "Meow meow" << std::endl;
    }
    virtual void    moving(void) const
    {
        std::cout << "The cat is moving" << std::endl;
    }
    ~Cat()
    {
        std::cout << "Cat destructor called" << std::endl;
    }
};

int main()
{
    IAnimal  *cat = new Cat();
    IAnimal  *dog = new Dog();
    cat->makeSound();
    dog->makeSound();
    cat->moving();
    dog->moving();
    delete cat;
    delete dog;
    return (0);
}