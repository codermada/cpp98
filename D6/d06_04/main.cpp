#include <iostream>

class Parent {public: int c; Parent(): c(3){std::cout << "parent constructor called" << std::endl;} void print(){std::cout << "parent " << c << std::endl;}};
class Child1: public Parent {public: int c; Child1(): c(4){std::cout << "c1 constructor called" << std::endl;} void print(){std::cout << "c1 " << c << std::endl;}};
class Child2: public Parent {public: int c; Child2(): c(555){std::cout << "c2 constructor called" << std::endl;} void print(){std::cout << "c2 " << c << std::endl;}};

int main()
{
    Child1  c1;
    Child2  *c2;

    Parent  *c1p = &c1;
    c2 = static_cast<Child2 *>(c1p);
    c2->print();

    std::cout << static_cast<int>('a') << std::endl;
    return (0);
}