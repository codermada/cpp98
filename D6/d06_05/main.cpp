#include <iostream>
#include <typeinfo>

class Parent {public: int c; Parent(): c(3){std::cout << "parent constructor called" << std::endl;} virtual ~Parent(){} void print(){std::cout << "parent " << c << std::endl;}};
class Child1: public Parent {public: int c; Child1(): c(4){std::cout << "c1 constructor called" << std::endl;} void print(){std::cout << "c1 " << c << std::endl;}};
class Child2: public Parent {public: int c; Child2(): c(555){std::cout << "c2 constructor called" << std::endl;} void print(){std::cout << "c2 " << c << std::endl;}};

int main()
{
    Child1  c1;
    Child2  *c2;
    Child1  *c3;
    Child2  test;

    Parent  *c1p = &c1;
    Parent  *c2p = &test;
    Parent  *c3p = &c1;
    Parent  p;
    c2 = dynamic_cast<Child2 *>(c1p);
    c3 = dynamic_cast<Child1 *>(c3p);
    if (c2)
        c2->print();
    if (c3)
        c3->print();
    try
    {
        Child2  & c2r = dynamic_cast<Child2 &>(*c2p);
    }
    catch(std::bad_cast& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
