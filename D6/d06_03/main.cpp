#include <iostream>

class Parent {public: int c; Parent(): c(3){std::cout << "parent constructor called" << std::endl;} void print(){std::cout << "parent " << c << std::endl;}};
class Child1: public Parent {public: int c; Child1(): c(4){std::cout << "c1 constructor called" << std::endl;} void print(){std::cout << "c1 " << c << std::endl;}};
class Child2: public Parent {public: int c; Child2(): c(555){std::cout << "c2 constructor called" << std::endl;} void print(){std::cout << "c2 " << c << std::endl;}};

int main()
{
    Child1  c1;
    Child2  *c2;
    Parent  *p;
    c2 = (Child2 *)&c1;
    p = (Parent *)&c1;
    c2->print();
    p->print();
    Child2 *c3;
    c3 = (Child2 *)p;
    c3->print();
    return (0);
}