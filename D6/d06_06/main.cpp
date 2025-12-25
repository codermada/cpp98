#include <iostream>

class Parent {public: int c; Parent(): c(3){std::cout << "parent constructor called" << std::endl;} virtual ~Parent(){} void print(){std::cout << "parent " << c << std::endl;}};
class Child1: public Parent {public: int c; Child1(): c(4){std::cout << "c1 constructor called" << std::endl;} void print(){std::cout << "c1 " << c << std::endl;}};
class Child2: public Parent {public: int c; Child2(): c(555){std::cout << "c2 constructor called" << std::endl;} void print(){std::cout << "c2 " << c << std::endl;}};

int main()
{
    int i = 2;
    int*pi = &i;
    Child1  c;
    Parent  p;
    Parent  *pp;
    Child1  *pc;
    pp = reinterpret_cast<Parent *>(&c);
    pp->print();
    p.c = 9;
    pc = reinterpret_cast<Child1 *>(pi);
    pc->print();
    pc->c = 9;
    pc->print();
    return (0);
}
