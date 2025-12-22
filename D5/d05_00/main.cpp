#include <iostream>

class   Dog
{
public:
    class Leg
    {
    public:
        Leg()
        {
            std::cout << "instance of Dog::Leg created" << std::endl;
        }
    };
};

class   Cat
{
public:
    class Leg
    {
    public:
        Leg()
        {
            std::cout << "instance of cat::Leg created" << std::endl;
        }
    };
};

int main()
{
    Dog::Leg    dogleg;
    Cat::Leg    catleg;
    return (0);
}