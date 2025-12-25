#include <iostream>

class   A{};
class   B{};

class   C
{
public:
    C(A const &_){ std::cout << "built from class A" << std::endl;}
    explicit C(B const &_){ std::cout << "built from class B" << std::endl;}
};

void    f(C const &_)
{}

int main()
{
    f(A());
    // f(B()); not working with 'explicit' keyword
    return (0);
}