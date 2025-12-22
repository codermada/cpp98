#include <iostream>

class   AAnimal
{
public:
    std::string type;
    virtual void    makeSound(void) const = 0;
    virtual void    moving(void) const
    {
    	std::cout << "The animal is moving" << std::endl;
    }
    virtual ~AAnimal()
    {
        std::cout << "Animal destructor called" << std::endl;
    }
};

class   Dog: public AAnimal
{
public:
    std::string type;
    virtual void    makeSound(void) const
    {
        std::cout << "Woof woof" << std::endl;
    }
    void    moving(void) const
    {
        std::cout << "The dog is moving" << std::endl;
    }
    ~Dog()
    {
        std::cout << "Dog destructor called" << std::endl;
    }
};

class   Cat: public AAnimal
{
public:
    std::string type;
    virtual void    makeSound(void) const
    {
        std::cout << "Meow meow" << std::endl;
    }
    void    moving(void) const
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
    AAnimal  *cat = new Cat();
    AAnimal  *dog = new Dog();
    cat->makeSound();
    dog->makeSound();
    cat->moving();
    dog->moving();
    delete cat;
    delete dog;
    return (0);
}
